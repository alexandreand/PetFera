#include "../include/AnfibioExotico.hpp"

AnfibioExotico::AnfibioExotico()
{

}
AnfibioExotico::~AnfibioExotico()
{

}

void AnfibioExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string AnfibioExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void AnfibioExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AnfibioExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}