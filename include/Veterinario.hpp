#include "Funcionario.hpp"
#include <string>

using namespace std;

class Veterinario : public Funcionario{
	string m_crmv;
public:
	Veterinario();
	~Veterinario();
	//gets e sets
	void setM_crmv(string value);
	string getM_crmv();
};