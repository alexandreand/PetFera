#include <iostream>
#include <string>

using namespace std;

#include <mysql/mysql.h>


MYSQL * conectar(string HOST, string USER, string PASS, string DB)
{
	MYSQL * conexao;

	mysql_init(conexao);
	if ( mysql_real_connect(conexao, HOST.c_str(), USER.c_str(), PASS.c_str(), DB.c_str(), 0, NULL, 0) )
	{
		cout<<"conectado com sucesso!"<<endl;
	}	
	else
	{
		cout<<"Falha de conexao"<<endl;
		cout<<"Erro "<<mysql_errno(conexao)<<" : "<<mysql_error(conexao)<<endl;
		mysql_close(conexao);
	}

	return conexao;
}