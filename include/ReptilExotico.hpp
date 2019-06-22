#ifndef REPTIL_HPP
#define REPTIL_HPP

#include "Reptil.hpp"

#endif

#include <sstream>
class ReptilExotico : public Reptil
{
private:
	string m_pais_origem;
	string m_autorizacao_ibama;

public:
	ReptilExotico();
	~ReptilExotico();

	void setM_pais_origem(string value);
	string getM_pais_origem();

	void setM_autorizacao_ibama(string value);
	string getM_autorizacao_ibama();	

	string mysql_insert(string nome_tabela);
};