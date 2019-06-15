#include "../include/ReptilExotico.hpp"

ReptilExotico::ReptilExotico()
{

}
ReptilExotico::~ReptilExotico()
{

}

void ReptilExotico::setM_pais_origem(string value)
{
	this->m_pais_origem = value;
}
string ReptilExotico::getM_pais_origem()
{
	return this->m_pais_origem;
}

void ReptilExotico::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string ReptilExotico::getM_autorizacao_ibama()
{
	return m_autorizacao_ibama;
}