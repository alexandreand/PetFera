#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.hpp"

#endif

class Reptil : public Animal{
	private:
		bool m_venenoso;
		string m_tipo_veneno;
	public:
		Reptil();
		~Reptil();
		//gets e sets
		void setM_tipo_veneno(string value);
		string getM_tipo_veneno();
		void setM_venenoso(bool value);
		bool getM_venenoso();
};