#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.hpp"

#endif

class Mamifero : public Animal{
	private:
		string m_cor_pelo;
	public:
		Mamifero();
		~Mamifero();
		//gets e sets
		void setM_cor_pelo(string value);
		string getM_cor_pelo();
};