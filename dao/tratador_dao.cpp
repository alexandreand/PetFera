#ifndef TRATADOR_HPP
#define TRATADOR_HPP
#include "../include/Tratador.hpp"
#endif

#ifndef CONEXAO_CPP
#define CONEXAO_CPP
#include "../mysql/Conexao.cpp"
#endif

class tratador_dao{
private:
	MYSQL conexao;
public:
	void save(Tratador t){
		string sql = "INSERT INTO tratador(nome, cpf, especialidade, idade, tipo_sanguineo, fator_rh, nivel_seguranca)  values(";
		sql += "\""; sql += t.getM_nome();            sql += "\",";
		sql += "\""; sql += t.getM_cpf();             sql += "\",";
		sql += "\""; sql += t.getM_especialidade();   sql += "\",";
					 sql += t.getM_idade();           sql += ","; 
			         sql += t.getM_tipo_sanguineo();  sql += ",";
		sql += "\""; sql += t.getM_fator_rh();        sql += "\",";
		sql += "\""; sql += t.getM_nivel_seguranca(); sql += "\");";
		
		

		int res = mysql_query(&conexao, sql.c_str());
		if (res == 0){
			cout<<"Dados Inseridos"<<endl;
		}else{
			cout<<"Erro na inserção de dados "<<mysql_errno(&conexao)<<" : "<<mysql_error(&conexao)<<endl;
		}
	}

	void remove(int id){
		auto s = std::to_string(id);
		string t = "DELETE FROM tratador WHERE id=";
		int res = mysql_query(&conexao, (t+s).c_str());
		if (res == 0){
			cout<<"Dados removidos"<<endl;
		}else{
			cout<<"Erro na remoção de dados "<<mysql_errno(&conexao)<<" : "<<mysql_error(&conexao)<<endl;
		}
	}

	void list(){
		if (mysql_query(&conexao, "SELECT * FROM tratador"));
		{
			cout<<"Erro SELECT"<<endl;
			//return -1;
		}
		
		MYSQL_FIELD *campos;
		MYSQL_ROW linhas;
		MYSQL_RES * resp = mysql_store_result(&conexao);
		
		//mostrar cabeçalho
		campos = mysql_fetch_fields(resp);
		for (int cont = 0; cont < mysql_num_fields(resp); cont++){
			cout<<(campos[cont]).name;
			if (mysql_num_fields(resp)>1){
				cout<<"\t";
			}
		}
		
		cout << "\n\n";

		//mostrar dados
		while((linhas=mysql_fetch_row(resp))!=NULL)
		{
			for (int cont = 0; cont < mysql_num_fields(resp); cont++){
				cout<<linhas[cont]<<"\t";
			}
			cout<<endl;
		}
	}

	tratador_dao(){
		mysql_init(&conexao);
		if (mysql_real_connect(&conexao, "localhost", "root", "djongador", "petfera", 0, NULL, 0) )
		{
			cout<<"conectado com sucesso!"<<endl;
		}	
		else
		{
			cout<<"Falha de conexao"<<endl;
			cout<<"Erro "<<mysql_errno(&conexao)<<" : "<<mysql_error(&conexao)<<endl;
			mysql_close(&conexao);
		} 
	}
};