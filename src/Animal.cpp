#include "../include/Animal.hpp"

void Animal::setClasse(string classe)
{
	this->m_classe = classe;
}
string Animal::getClasse()
{
	return this->m_classe;
}
void Animal::setNomeCientifico(string nome)
{
	this->m_nome_cientifico = nome;
}
string Animal::getNomeCientifico()
{
	return this->m_nome_cientifico;
}
void Animal::setSexo(char sexo)
{
	this->m_sexo = sexo;
}
char Animal::getSexo()
{
	return this->m_sexo;
}
void Animal::setDieta(string dieta)
{
	this->m_dieta = dieta;
}
string Animal::getDieta()
{
	return this->m_dieta;
}
void Animal::setVeterinario(Veterinario v)
{
	this->m_veterinario = v;
}
Veterinario Animal::getVeterinario()
{
	return this->m_veterinario;
}
void Animal::setTratador(Tratador t)
{
	this->m_tratador = t;
}
Tratador Animal::getTratador()
{
	return this->m_tratador;
}
void Animal::setNomeBatismo(string nome)
{
	this->m_nome_batismo = nome;
}
string Animal::getNomeBatismo()
{
	return this->m_nome_batismo;
}
