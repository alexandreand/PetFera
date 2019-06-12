#include <string>
#include "Veterinario.hpp"
#include "Tratador.hpp"

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

		void setClasse(string classe);
		string getClasse();

		void setNomeCientifico(string nome);
		string getNomeCientifico();

		void setSexo(char sexo);
		char getSexo();

		void setDieta(string dieta);
		string getDieta();

		void setVeterinario(Veterinario v);
		Veterinario getVeterinario();

		void setTratador(Tratador t);
		Tratador getTratador();

		void setNomeBatismo(string nome);
		string getNomeBatismo();
};