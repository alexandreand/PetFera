#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include "Mamifero.hpp"

#endif


#include <string>

using namespace std;

class MamiferoNativo : public Mamifero
{
	private:
		string m_uf_origem;
		string m_autorizacao;
		string m_autorizacao_ibama;
	public:
		MamiferoNativo();
		~MamiferoNativo();

		void setM_uf_origem(string value);
		string getM_uf_origem();

		void setM_autorizacao(string value);
		string getM_autorizacao();

		void setM_autorizacao_ibama(string value);
		string getM_autorizacao_ibama();
	
};