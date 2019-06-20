#include "../include/Mamifero.hpp"

Mamifero::Mamifero()
{

}
Mamifero::~Mamifero()
{

}
void Mamifero::setM_cor_pelo(string value)
{
	this->m_cor_pelo = value;
}
string Mamifero::getM_cor_pelo()
{
	return this->m_cor_pelo;
}