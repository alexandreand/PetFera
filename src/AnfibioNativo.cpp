#include "../include/AnfibioNativo.hpp"

AnfibioNativo::AnfibioNativo()
{

}
AnfibioNativo::~AnfibioNativo()
{

}

void AnfibioNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string AnfibioNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void AnfibioNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string AnfibioNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void AnfibioNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AnfibioNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}

string AnfibioNativo::mysql_insert(string nome_tabela)
{

	string cmd;

	string total_mudas;
	ostringstream convert;
	convert << getM_total_mudas();
	total_mudas = convert.str();


	//Substituir tamanho por classe /falta veterinario e tratador
	//e implementar date em ultima muda
	cmd = "INSERT INTO " +	nome_tabela
						 +	"("
						 +	"nome_cientifico,"
						 +	"classe,"
						 +	"sexo,"
						 +	"dieta,"
						 +	"id_veterinario,"
						 +	"id_tratador,"
						 +	"nome_batismo,"
						 +	"total_mudas,"
						 +	"ultima_muda,"
						 +	"uf_origem,"
						 +	"autorizacao"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	getM_nome_cientifico() + ", "
						 +	getM_classe() + ", "
						 +	getM_sexo() + ", "
						 +	getM_dieta() + ", "
						 +	getM_nome_batismo() + ", "
						 +	total_mudas  + ", "
						 +	getM_uf_origem() + ", "
						 +	getM_autorizacao() + ", "
						 +	getM_autorizacao_ibama()
						 +	");";
	return cmd;
}