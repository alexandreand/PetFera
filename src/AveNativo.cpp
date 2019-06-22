#include "../include/AveNativo.hpp"

AveNativo::AveNativo()
{

}
AveNativo::~AveNativo()
{
	
}

void AveNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string AveNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void AveNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string AveNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void AveNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AveNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}

string AveNativo::mysql_insert(string nome_tabela)
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
						 +	"uf_origem,"
						 +	"autorizacao,"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	getM_nome_cientifico() + ", "
						 +	getM_classe() + ", "
						 +	getM_sexo() + ", "
						 +	getM_dieta() + ", "
						 +	getM_nome_batismo() + ", "
						 +	tam_bico  + ", "
						 +	env_asas  + ", "
						 +	getM_uf_origem() + ", "
						 +	getM_autorizacao() + ", "
						 +	getM_autorizacao_ibama()
						 +	");";
	return cmd;
}
