#include "../include/Veterinario.hpp"

using namespace std;

Veterinario::Veterinario(){
	this->m_crmv = "";
}

Veterinario::Veterinario(string crmv){
	this->m_crmv = crmv;
}

Veterinario::~Veterinario(){
	delete &(this->m_crmv);
}
//gets e sets
void Veterinario::setM_crmv(string value){
	this->m_crmv = value;
}

string Veterinario::getM_crmv(){
	return this->m_crmv;
}
