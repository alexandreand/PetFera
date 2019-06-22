#ifndef ANFIBIO_HPP
#define ANFIBIO_HPP

#include "Anfibio.hpp"

#endif

#include <string>
#include <sstream>
using namespace std;

class AnfibioNativo : public Anfibio
{
	private:
		string m_uf_origem;
		string m_autorizacao;
		string m_autorizacao_ibama;
	public:
		AnfibioNativo();
		~AnfibioNativo();

		void setM_uf_origem(string value);
		string getM_uf_origem();

		void setM_autorizacao(string value);
		string getM_autorizacao();

		void setM_autorizacao_ibama(string value);
		string getM_autorizacao_ibama();

		//testando...
		string mysql_insert(string nome_tabela);

		
};