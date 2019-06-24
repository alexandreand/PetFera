#include "../include/MamiferoExotico.hpp"

MamiferoExotico::MamiferoExotico()
{

}
MamiferoExotico::~MamiferoExotico()
{

}

void MamiferoExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string MamiferoExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void MamiferoExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string MamiferoExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}

string MamiferoExotico::mysql_insert(string nome_tabela)
{

	string cmd;

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
						 +	"cor_pelo,"
						 +	"pais_origem,"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	"'" + getM_nome_cientifico() + "'" + ", "
						 +	"'" + getM_classe() + "'" + ", "
						 +	"'" + getM_sexo() + "'" + ", "
						 +	"'" + getM_dieta() + "'" + ", "
						 +	"'" + getM_nome_batismo() + "'" + ", "
						 +	"'" + getM_cor_pelo()  + "'" + ", "
						 +	"'" + getM_pais_origem() + "'" + ", "
						 +	"'" + getM_autorizacao_ibama() + "'"
						 +	");";
	return cmd;
}