#include <string>
#include "include/Veterinario.hpp"
#include "include/Tratador.hpp"


class Animal
{
	private:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		Veterinario veterinario;
		Tratador tratador;
		string nome_batismo;

	public:
		Animal();
		Animal(string classe, string nome_cientifico);
		~Aninal();

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
}