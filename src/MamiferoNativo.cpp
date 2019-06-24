#include "../include/MamiferoNativo.hpp"

MamiferoNativo::MamiferoNativo()
{

}
MamiferoNativo::~MamiferoNativo()
{
	
}

void MamiferoNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string MamiferoNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void MamiferoNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string MamiferoNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void MamiferoNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string MamiferoNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}

string MamiferoNativo::mysql_insert(string nome_tabela)
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
						 +	"uf_origem,"
						 +	"autorizacao,"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	"'" + getM_nome_cientifico() + "'" + ", "
						 +	"'" + getM_classe() + "'" + ", "
						 +	"'" + getM_sexo() + "'" + ", "
						 +	"'" + getM_dieta() + "'" + ", "
						 +	"'" + getM_nome_batismo() + "'" + ", "
						 +	"'" + getM_cor_pelo()  + "'" + ", "
						 +	"'" + getM_uf_origem() + "'" + ", "
						 +	"'" + getM_autorizacao() + "'" + ", "
						 +	"'" + getM_autorizacao_ibama() +"'"
						 +	");";
	return cmd;
}