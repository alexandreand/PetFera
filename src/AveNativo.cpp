#include "../include/AveNativo.hpp"

AveNativo::AveNativo()
{

}
AveNativo::~AveNativo()
{
	
}

void AveNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string AveNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void AveNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string AveNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void AveNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AveNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}