#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.hpp"

#endif

#include<time.h>

class Anfibio : public Animal{
	private:
		int m_total_mudas;
		time_t m_ultima_muda;
	public:
		Anfibio();
		~Anfibio();
		//gets e sets
		void setM_total_mudas(int value);
		int getM_total_mudas();
		void setM_ultima_muda(time_t value);
		time_t getM_ultima_muda();
};