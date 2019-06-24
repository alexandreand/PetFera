#include "../include/Tratador.hpp"

using namespace std;

Tratador::Tratador(){
	this->m_nivel_seguranca = "";
}

Tratador::Tratador(string nivel_seguranca){
	this->m_nivel_seguranca = nivel_seguranca;
}

Tratador::~Tratador(){
	delete &(this->m_nivel_seguranca);
}
//gets e sets
void Tratador::setM_nivel_seguranca(string value){
	this->m_nivel_seguranca = value;
}

string Tratador::getM_nivel_seguranca(){
	return this->m_nivel_seguranca;
}

string Tratador::mysql_insert(string nome_tabela)
{
	string cmd;
	string idade, tipo_sanguineo;

	ostringstream convert_idade;
	ostringstream convert_tipo_sanguineo;

	convert_idade << getM_idade();
	convert_tipo_sanguineo << getM_tipo_sanguineo();

	idade = convert_idade.str();
	tipo_sanguineo = convert_tipo_sanguineo.str();

	cmd = "INSERT INTO " + nome_tabela + "("
						 + "nome, "
						 + "cpf, "
						 + "especialidade, "
						 + "idade, "
						 + "tipo_sanguineo, "
						 + "fator_rh, "
						 + "nivel_seguranca"
						 + ") VALUES("
						 + "'" + getM_nome() + "'" + ", "
						 + "'" + getM_cpf() + "'" + ", "
						 + "'" + getM_especialidade() + "'" + ", "
						 + idade + ", "
						 + "'" + tipo_sanguineo + "'" + ", "
						 + "'" + getM_fator_rh() + "'" + ", "
						 + "'" + getM_nivel_seguranca()+ "'"
						 + ");";
	return cmd;
}