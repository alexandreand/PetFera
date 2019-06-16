#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.hpp"

#endif


#include <string>
using namespace std;

class Ave : public Animal{
	private:
		string m_cor_pelo;
	public:
		Ave();
		~Ave();
		//gets e sets
		void setM_cor_pelo(string value);
		string getM_cor_pelo();
};