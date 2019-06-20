#include "../include/AnfibioExotico.hpp"

AnfibioExotico::AnfibioExotico()
{

}
AnfibioExotico::~AnfibioExotico()
{

}

void AnfibioExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string AnfibioExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void AnfibioExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AnfibioExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}

string AnfibioExotico::mysql_insert(string nome_tabela)
{
	string cmd;

	string total_mudas;
	ostringstream convert;
	convert << getM_total_mudas();
	total_mudas =  convert.str();

	cmd = "INSERT INTO " +	nome_tabela
						 +	"("
						 +	"classe,"
						 +	"nome_cientifico,"
						 +	"sexo,"
						 +	"total_mudas"
						 +	") VALUES("
						 +	getM_classe() + ", "
						 +	getM_nome_cientifico() + ", "
						 +	getM_sexo() + ", "
						 +	getM_nome_batismo() + ", "
						 +	total_mudas
						 +	");";
	return cmd;
}