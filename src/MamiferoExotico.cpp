#include "../include/MamiferoExotico.hpp"

MamiferoExotico::MamiferoExotico()
{

}
MamiferoExotico::~MamiferoExotico()
{

}

void MamiferoExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string MamiferoExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void MamiferoExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string MamiferoExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}