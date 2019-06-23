#include "../include/Veterinario.hpp"

using namespace std;

Veterinario::Veterinario(){
	this->m_crmv = "";
}

Veterinario::Veterinario(string crmv){
	this->m_crmv = crmv;
}

Veterinario::~Veterinario(){
	delete &(this->m_crmv);
}
//gets e sets
void Veterinario::setM_crmv(string value){
	this->m_crmv = value;
}

string Veterinario::getM_crmv(){
	return this->m_crmv;
}

string Veterinario::mysql_insert(string nome_tabela)
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
						 + "crmv"
						 + ") VALUES("
						 + "'" + getM_nome() + "'" + ", "
						 + "'" + getM_cpf() + "'" + ", "
						 + "'" + getM_especialidade() + "'" + ", "
						 + idade + ", "
						 + "'" + tipo_sanguineo + "'" + ", "
						 + "'" + getM_fator_rh() + "'" + ", "
						 + "'" + getM_crmv() + "'"
						 + ");";
	return cmd;
}