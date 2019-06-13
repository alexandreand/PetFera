#include "Animal.hpp"


class Mamifero : public Animal{
	private:
		double m_tam_bico;
		double m_env_asas;
	public:
		Mamifero();
		~Mamifero();
		//gets e sets
		void setM_tam_bico(double value);
		double getM_tam_bico();
		void setM_env_asas(double value);
		double getM_env_asas();
};