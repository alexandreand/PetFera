#include "../include/Tratador.hpp"

using namespace std;

Tratador::Tratador(){
	this->m_nivel_seguranca = "";
}

Tratador::Tratador(string nivel_seguranca){
	this->m_nivel_seguranca = nivel_seguranca;
}

Tratador::~Tratador(){
	delete &(this->m_nivel_seguranca);
}
//gets e sets
void Tratador::setM_nivel_seguranca(string value){
	this->m_nivel_seguranca = value;
}

string Tratador::getM_nivel_seguranca(){
	return this->m_nivel_seguranca;
}