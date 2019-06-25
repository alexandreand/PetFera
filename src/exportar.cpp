#include <iostream>
#include <string>
#include <vector>

#include <mysql/mysql.h>

using namespace std;

int main(int argc, char const *argv[]){
	std::vector<std::string> all_args;
	all_args.assign(argv, argv + argc);
	
	if(argc <= 1 || argc%2 != 0){
		cout << " Falta argumentos!\n É necesasrio informar o arquivo de saida!\n";
		return 1;
	}

	string arq = all_args[1];
	string classe;
	string id_vet;
	string id_trat;
	bool containClass = false;
	bool containVet = false;
	bool containTrat = false;
	

	for (int i = 1; i < argc; ++i){
		
		if(string(argv[i]) == "-c"){
			classe = all_args[i+1];
			containClass = true;
			if(i+2 < argc)
				arq = all_args[i+2];
		}

		if(string(argv[i]) == "-v"){
			id_vet = all_args[i+1];
			containVet = true;
			if(i+2 < argc)
				arq = all_args[i+2];
		}

		if(string(argv[i]) == "-t"){
			id_trat = all_args[i+1];
			containTrat = true;
			if(i+2 < argc)
				arq = all_args[i+2];
		}
	}

	//conectando ao banco
	MYSQL conexao;
	mysql_init(&conexao);
	if ( mysql_real_connect(&conexao, "localhost", "root", "djongador", "petfera", 0, NULL, 0) ){
		cout<<"conectado com sucesso!"<<endl;
	}else{
		cout<<"Falha de conexao"<<endl;
		cout<<"Erro "<<mysql_errno(&conexao)<<" : "<<mysql_error(&conexao)<<endl;
		mysql_close(&conexao);
	}
	//fim do inicio daconexao


	//gerando o sql e buscando no banco
	string sql = "SELECT * FROM ";
	if(containClass){
		sql += classe;
		
	}else{

	}	

	//fstream out_file("data.dat", ios::out);
	return 0;
}