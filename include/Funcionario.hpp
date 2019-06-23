#include <string>

using namespace std;

class Funcionario{
	private:
		int m_id;
		string m_nome;
		string m_cpf;
		string m_especialidade;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
					
	public:
		Funcionario(int id, string nome, string cpf,
					short idade, short tipo_sanguineo,
					char fator_rh, string especialidade);
		Funcionario();
		~Funcionario();
		//gets e sets

		void setM_id(int value);
		int getM_id();

		void setM_nome(string value);
		string getM_nome();

		void setM_cpf(string value);
		string getM_cpf();

		void setM_especialidade(string value);
		string getM_especialidade();

		void setM_idade(short value);
		short getM_idade();

		void setM_tipo_sanguineo(short value);
		short getM_tipo_sanguineo();

		void setM_fator_rh(char value);
		char getM_fator_rh();
};