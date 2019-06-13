#include "../include/AnfibioNativo.hpp"

AnfibioNativo::AnfibioNativo()
{

}
AnfibioNativo::~AnfibioNativo()
{

}

void AnfibioNativo::setM_uf_origem(string value)
{
	this->m_uf_origem = value;
}
string AnfibioNativo::getM_uf_origem()
{
	return this->m_uf_origem;
}
void AnfibioNativo::setM_autorizacao(string value)
{
	this->m_autorizacao = value;
}
string AnfibioNativo::getM_autorizacao()
{
	return this->m_autorizacao;
}
void AnfibioNativo::setM_autorizacao_ibama(string value)
{
	this->m_autorizacao_ibama = value;
}
string AnfibioNativo::getM_autorizacao_ibama()
{
	return this->m_autorizacao_ibama;
}