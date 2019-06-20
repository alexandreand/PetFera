
#include "Veterinario.hpp"
#include "Tratador.hpp"

#include <string>
using namespace std;

class Animal{
	private:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		string m_nome_batismo;

	public:
		Animal();
		Animal(string classe, string nome_cientifico);
		~Animal();

		void setM_classe(string value);
		string getM_classe();

		void setM_nome_cientifico(string value);
		string getM_nome_cientifico();

		void setM_sexo(char value);
		char getM_sexo();

		void setM_dieta(string value);
		string getM_dieta();

		void setM_veterinario(Veterinario v);
		Veterinario getM_veterinario();

		void setM_tratador(Tratador t);
		Tratador getM_tratador();

		void setM_nome_batismo(string value);
		string getM_nome_batismo();
};