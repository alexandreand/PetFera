#include "../include/ReptilNativo.hpp"

ReptilNativo::ReptilNativo()
{

}
ReptilNativo::~ReptilNativo()
{
	
}

void ReptilNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string ReptilNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void ReptilNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string ReptilNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void ReptilNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string ReptilNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}

string ReptilNativo::mysql_insert(string nome_tabela)
{

	string cmd;

	string venenoso;
	ostringstream convert;
	convert << getM_venenoso();
	venenoso = convert.str();


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
						 +	"tipo_veneno,"
						 +	"venenoso,"
						 +	"uf_origem,"
						 +	"autorização_ibama"
						 +	") VALUES("
						 +	"'" + getM_nome_cientifico() + "'" + ", "
						 +	"'" + getM_classe() + "'" + ", "
						 +	"'" + getM_sexo() + "'" + ", "
						 +	"'" + getM_dieta() + "'" + ", "
						 +	getM_id_veterinario() + ", "
						 +	getM_id_tratador() + ", "
						 +	"'" + getM_nome_batismo() + "'" + ", "
						 +	"'" + getM_tipo_veneno() + "'" + ", "
						 +	venenoso  + ", "
						 +	"'" + getM_uf_origem() + "'" + ", "
						 +	"'" + getM_autorizacao() + "'" + ", "
						 +	"'" + getM_autorizacao_ibama() + "'" 
						 +	");";
	return cmd;
}
