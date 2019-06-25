#include "../include/Animal.hpp"

Animal::Animal()
{

}
Animal::~Animal()
{
	
}

void Animal::setM_classe(string value)
{
	this->m_classe = value;
}
string Animal::getM_classe()
{
	return this->m_classe;
}
void Animal::setM_nome_cientifico(string value)
{
	this->m_nome_cientifico = value;
}
string Animal::getM_nome_cientifico()
{
	return this->m_nome_cientifico;
}
void Animal::setM_sexo(char value)
{
	this->m_sexo = value;
}
char Animal::getM_sexo()
{
	return this->m_sexo;
}
void Animal::setM_dieta(string value)
{
	this->m_dieta = value;
}
string Animal::getM_dieta()
{
	return this->m_dieta;
}
void Animal::setM_id_veterinario(string value)
{
	this->m_id_veterinario = value;
}
string Animal::getM_id_veterinario()
{
	return this->m_id_veterinario;
}
void Animal::setM_id_tratador(string value)
{
	this->m_id_tratador = value;
}
string Animal::getM_id_tratador()
{
	return this->m_id_tratador;
}
void Animal::setM_nome_batismo(string value)
{
	this->m_nome_batismo = value;
}
string Animal::getM_nome_batismo()
{
	return this->m_nome_batismo;
}
