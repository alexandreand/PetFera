#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include "Funcionario.hpp"
#endif

#include <string>
#include <sstream>
using namespace std;

class Tratador : public Funcionario{
	private:
		string m_nivel_seguranca;
	public:
		Tratador();
		Tratador(string nivel_seguranca);
		~Tratador();
		//gets e sets
		void setM_nivel_seguranca(string value);
		string getM_nivel_seguranca();

		string mysql_insert(string nome_tabela);
};