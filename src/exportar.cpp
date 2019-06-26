#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <mysql/mysql.h>

using namespace std;

void writeSQLInArchive(string sql, fstream * out_file);

string filterSQL(string classe, string nome_vet, string nome_trat);

int main(int argc, char const *argv[]){
	std::vector<std::string> all_args;
	all_args.assign(argv, argv + argc);
	
	if(argc <= 1 || argc%2 != 0){
		cout << " Falta argumentos!\n É necesasrio informar o arquivo de saida!\n";
		return 1;
	}

	string arq = all_args[1];
	string classe;
	string nome_vet = "";
	string nome_trat = "";
	bool containClass = false;
	

	for (int i = 1; i < argc; ++i){
		
		if(string(argv[i]) == "-c"){
			classe = all_args[i+1];
			containClass = true;
			if(i+2 < argc)
				arq = all_args[i+2];
		}

		if(string(argv[i]) == "-v"){
			nome_vet = all_args[i+1];
			if(i+2 < argc)
				arq = all_args[i+2];
		}

		if(string(argv[i]) == "-t"){
			nome_trat = all_args[i+1];
			if(i+2 < argc)
				arq = all_args[i+2];
		}
	}


	//gerando o sql e buscando no banco
	fstream out_file(arq.c_str(), ios::out); //abrindo arquivo
	string sql;
	if(containClass){
		sql = filterSQL(classe, nome_vet, nome_trat);
		out_file << "--- " << classe << " ---\n";
		writeSQLInArchive(sql, &out_file);
	}else{
		for(auto obj : {"reptil_nativo", "reptil_exotico", "mamifero_nativo", "mamifero_exotico"
						"anfibio_nativo", "anfibio_exotico", "ave_nativo", "ave_exotico"}){
			sql = filterSQL(obj, nome_vet, nome_trat);
			out_file << "--- " << obj << " ---\n";
			writeSQLInArchive(sql, &out_file);
		}
	}	
	out_file.close(); // fechando arquivo
	return 0;
}

string filterSQL(string classe, string nome_vet, string nome_trat){
	string sql;
	if(nome_trat != "" && nome_vet == ""){
		sql = "SELECT c.* FROM "+classe+" as c, tratador t "+ 
			   "WHERE t.nome = \""+nome_trat+"\" and c.id_tratador = t.id;";
	}else if(nome_vet != "" && nome_trat == ""){
		sql = "SELECT c.* FROM "+classe+" as c, veterinario v "+ 
			   "WHERE v.nome = \""+nome_vet+"\" and c.id_veterinario = v.id;";
	}else if(nome_vet == "" && nome_trat == ""){
		sql = "SELECT * FROM " + classe;
	}else if(nome_vet != "" && nome_trat != ""){
		sql = "SELECT c.* FROM "+classe+" as c, veterinario v, tratador t "+ 
			   "WHERE v.nome = \""+nome_vet+"\" and t.nome = \""+nome_trat+"\" "
			   "and c.id_veterinario = v.id and c.id_tratador = t.id;";
	}

	return sql;
}

void writeSQLInArchive(string sql, fstream * out_file){
	
	//conectando ao banco
	MYSQL conexao;
	mysql_init(&conexao);
	if ( mysql_real_connect(&conexao, "localhost", "root", "djongador", "petfera", 0, NULL, 0) ){
		cout << "Conexão OK!!!\n";
	}else{
		cout<<"Falha de conexao"<<endl;
		cout<<"Erro "<<mysql_errno(&conexao)<<" : "<<mysql_error(&conexao)<<endl;
		mysql_close(&conexao);
		return;
	}
	//fim do inicio daconexao

	//pegando dados

	if (mysql_query(&conexao, sql.c_str())){
		cout<<"Erro SELECT"<<endl;
		return;
	}

	cout << "Busca feita !\n";

	MYSQL_FIELD *campos;
	MYSQL_ROW linhas;
	MYSQL_RES * resp = mysql_store_result(&conexao);
	
	cout << "Escrevendo no arquivo!\n";

	//escrever cabeçalho
	campos = mysql_fetch_fields(resp);
	for (int cont = 0; cont < mysql_num_fields(resp); cont++){
		*out_file << (campos[cont]).name;
		if (mysql_num_fields(resp)>1){
			*out_file<<";";
		}
	}
	//escrever dados
	while((linhas=mysql_fetch_row(resp))!=NULL)
	{
		for (int cont = 0; cont < mysql_num_fields(resp); cont++){
			*out_file <<linhas[cont]<<";";
		}
		*out_file <<endl;
	}

	*out_file << "\n";
}