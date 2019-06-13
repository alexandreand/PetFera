#include "../include/Mamifero.hpp"

Mamifero::Mamifero()
{

}
Mamifero::~Mamifero()
{

}
void Mamifero::setM_tam_bico(double value)
{
	this->m_tam_bico = value;
}
double Mamifero::getM_tam_bico()
{
	return this->m_tam_bico;
}
void Mamifero::setM_env_asas(double value)
{
	this->m_env_asas = value;
}
double Mamifero::getM_env_asas()
{
	return this->m_env_asas;
}