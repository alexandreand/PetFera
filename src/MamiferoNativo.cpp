#include "../include/MamiferoNativo.hpp"

MamiferoNativo::MamiferoNativo()
{

}
MamiferoNativo::~MamiferoNativo()
{
	
}

void MamiferoNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string MamiferoNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void MamiferoNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string MamiferoNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void MamiferoNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string MamiferoNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}