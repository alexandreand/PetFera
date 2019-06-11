#include "Funcionario.cpp"

class Tratador : public Funcionario{
	string m_nivel_seguranca;
public:
	Veterinario();
	~Veterinario();
	//gets e sets
	void setM_nivel_seguranca(string value);
	string getM_nivel_seguranca();
};