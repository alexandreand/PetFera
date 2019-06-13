#include "../include/Reptil.hpp"

Reptil::Reptil()
{
	this->m_venenoso = false;
}
Reptil::~Reptil()
{

}

void Reptil::setM_tipo_veneno(string value)
{
	this->m_tipo_veneno = value;
}
string Reptil::getM_tipo_veneno()
{
	return this->m_tipo_veneno;
}

void Reptil::setM_venenoso(bool value)
{
	this->m_venenoso = value;
}
bool Reptil::getM_venenoso()
{
	return this->m_venenoso;
}