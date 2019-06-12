#include "../include/Anfibio.hpp"

Anfibio::Anfibio()
{
	this->m_total_mudas = 0;
}
Anfibio::~Anfibio()
{

}

void Anfibio::setM_total_mudas(int value)
{
	this->m_total_mudas = value;
}
int Anfibio::getM_total_mudas()
{
	return this->m_total_mudas;
}
void Anfibio::setM_ultima_muda(time_t value)
{

}
time_t getM_ultima_muda()
{
	return this->m_ultima_muda
}