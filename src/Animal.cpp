#include "src/Animal.hpp"

void Animal::setClasse(string classe)
{
	this->classe = classe;
}
string Animal::getClasse()
{
	return this->classe;
}
void Animal::setNomeCientifico(string nome)
{
	this->nome_cientifico = nome;
}
string Animal::getNomeCientifico()
{
	return this->nome_cientifico;
}
void Animal::setSexo(char sexo)
{
	this->sexo = sexo;
}
char Animal::getSexo()
{
	return this->sexo;
}
void Animal::setDieta(string dieta)
{
	this->dieta = dieta;
}
string Animal::getDieta()
{
	return this->dieta;
}
void Animal::setVeterinario(Veterinario v)
{
	this->veterinario = v;
}
Veterinario Animal::getVeterinario()
{
	return this->veterinario;
}
void Animal::setTratador(Tratador t)
{
	this->tratador = t;
}
Tratador Animal::getTratador()
{
	return this->tratador;
}
void Animal::setNomeBatismo(string nome)
{
	this->nome_batismo = nome;
}
string Animal::getNomeBatismo()
{
	return this->nome_batismo;
}
