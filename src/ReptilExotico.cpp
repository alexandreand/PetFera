#include "../include/ReptilExotico.hpp"

ReptilExotico::ReptilExotico()
{

}
ReptilExotico::~ReptilExotico()
{

}

void ReptilExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string ReptilExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void ReptilExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string ReptilExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}

string ReptilExotico::mysql_insert(string nome_tabela)
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
						 +	"pais_origem,"
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
						 +	"'" + getM_pais_origem() + "'" + ", "
						 +	"'" + getM_autorizacao_ibama() + "'"
						 +	");";
	return cmd;
}
