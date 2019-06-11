#include "../src/Funcionario.cpp"

Funcionario::Funcionario(){
	this->m_id = 0;
	this->m_nome = "";
	this->m_cpf = "";
	this->m_idade = 0;
	this->m_tipo_sanguineo = 0;
	this->m_fator_rh = '';
	this->m_especialidade = "";
}

Funcionario::Funcionario(int id, string nome, string cpf,
					short idade, short tipo_sanguineo,
					char fator_rh, string especialidade){
	this->m_id = id;
	this->m_nome = nome;
	this->m_cpf = cpf;
	this->m_idade = idade;
	this->m_tipo_sanguineo = tipo_sanguineo;
	this->m_fator_rh = fator_rh;
	this->m_especialidade = especialidade;
}

void Funcionario::setM_id(int value){
	this->m_id = value;
}

int Funcionario::getM_id(){
	return this->m_id;
}

void Funcionario::setM_nome(string value){
	this->m_nome = value;
}

string Funcionario::getM_nome(){
	return this->m_nome;
}

void Funcionario::setM_cpf(string value){
	this->m_cpf = value;
}

string Funcionario::getM_cpf(){
	return this->m_cpf;
}

void Funcionario::setM_especialidade(string value){
	this->m_especialidade = value;
}

string Funcionario::getM_especialidade(){
	return this->m_especialidade;
}

void Funcionario::setM_idade(short value){
	this->m_idade = value;
}

short Funcionario::getM_idade(){
	return this->m_idade;
}

void setM_tipo_sanguineo(short value){
	this->m_tipo_sanguineo = value;
}

short Funcionario::getM_tipo_sanguineo(){
	return this->m_tipo_sanguineo;
}

void Funcionario::setM_fator_rh(char value){
	this->m_fator_rh = value;
}

char Funcionario::getM_fator_rh(){
	return this->m_fator_rh;
}