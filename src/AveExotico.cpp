#include "../include/AveExotico.hpp"

AveExotico::AveExotico()
{

}
AveExotico::~AveExotico()
{

}

void AveExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string AveExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void AveExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AveExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}