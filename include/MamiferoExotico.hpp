#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include "Mamifero.hpp"

#endif

class MamiferoExotico : public Mamifero
{
private:
	string m_pais_origem;
	string m_autorizacao_ibama;

public:
	MamiferoExotico();
	~MamiferoExotico();
	
	void setM_pais_origem(string value);
	string getM_pais_origem();

	void setM_autorizacao_ibama(string value);
	string getM_autorizacao_ibama();
};