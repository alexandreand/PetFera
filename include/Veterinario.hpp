#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include "Funcionario.hpp"
#endif

#include <string>

using namespace std;

class Veterinario : public Funcionario{
	private:
		string m_crmv;
	public:
		Veterinario();
		Veterinario(string crmv);
		~Veterinario();
		//gets e sets
		void setM_crmv(string value);
		string getM_crmv();
};