#include "../include/AveExotico.hpp"

AveExotico::AveExotico()
{

}
AveExotico::~AveExotico()
{

}

void AveExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string AveExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void AveExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AveExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}


string AveExotico::mysql_insert(string nome_tabela)
{

	string cmd;

	string tam_bico, env_asas;
	ostringstream convert_tam_bico, convert_env_asas;
	convert_tam_bico << getM_tam_bico();
	convert_env_asas << getM_env_asas();
	tam_bico = convert_tam_bico.str();
	env_asas = convert_env_asas.str();


	//Substituir tamanho por classe /falta veterinario e tratador
	cmd = "INSERT INTO " +	nome_tabela
						 +	"("
						 +	"nome_cientifico,"
						 +	"classe,"
						 +	"sexo,"
						 +	"dieta,"
						 +	"id_veterinario,"
						 +	"id_tratador,"
						 +	"nome_batismo,"
						 +	"tam_bico,"
						 +	"env_asas,"
						 +	"pais_origem,"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	"'" + getM_nome_cientifico() + "'" + ", "
						 +	"'" + getM_classe() + "'" + ", "
						 +	"'" + getM_sexo() + "'" + ", "
						 +	"'" + getM_dieta() + "'" + ", "
						 +	"'" + getM_nome_batismo() + "'" + ", "
						 +	tam_bico  + ", "
						 +	env_asas  + ", "
						 +	"'" + getM_pais_origem() + "'" + ", "
						 +	"'" + getM_autorizacao_ibama() + "'"
						 +	");";
	return cmd;
}
