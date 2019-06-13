#include "../include/ReptilNativo.hpp"

ReptilNativo::ReptilNativo()
{

}
ReptilNativo::~ReptilNativo()
{
	
}

void ReptilNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string ReptilNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void ReptilNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string ReptilNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void ReptilNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string ReptilNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}