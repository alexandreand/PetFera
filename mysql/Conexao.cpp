#include <iostream>
#include <string>

using namespace std;

#include <mysql/mysql.h>


void conectar(string HOST, string USER, string PASS, string DB, MYSQL * conexao){
	mysql_init(conexao);
	if ( mysql_real_connect(conexao, HOST.c_str(), USER.c_str(), PASS.c_str(), DB.c_str(), 0, NULL, 0) ){
		cout<<"conectado com sucesso!"<<endl;
	}	
	else{
		cout<<"Falha de conexao"<<endl;
		cout<<"Erro "<<mysql_errno(conexao)<<" : "<<mysql_error(conexao)<<endl;
		mysql_close(conexao);
	}
}

void run(string sql){
	MYSQL conexao;
	conectar("locahost", "root", "djogador", "petfera", &conexao);
	if (mysql_query(&conexao, sql.c_str())){
		cout<<"Erro: "<<endl;
		return;
	}

	mysql_close(&conexao);
}

int exists_rows(string sql){
	MYSQL conexao;
	conectar("locahost", "root", "djogador", "petfera", &conexao);
	if (mysql_query(&conexao, sql.c_str())){
		cout<<"Erro: "<<endl;
		return -1;
	}
	MYSQL_ROW linhas;
	MYSQL_RES * resp = mysql_store_result(&conexao);
	bool ret = mysql_fetch_row(resp) != NULL;
	mysql_close(&conexao);
	return ret;
}

MYSQL_RES * list(string sql){
	MYSQL conexao;
	conectar("locahost", "root", "djogador", "petfera", &conexao);
	if (mysql_query(&conexao, sql.c_str()));{
		cout<<"Erro SELECT"<<endl;
		
	}
		
	MYSQL_RES * resp = mysql_store_result(&conexao);
	mysql_close(&conexao);
	return resp;	
}