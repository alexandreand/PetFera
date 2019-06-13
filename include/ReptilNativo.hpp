#include "Reptil.hpp"
#include <string>

using namespace std;

class ReptilNativo : public Reptil
{
	private:
		string m_uf_origem;
		string m_autorizacao;
		string m_autorizacao_ibama;
	public:
		ReptilNativo();
		~ReptilNativo();

		void setM_uf_origem(string value);
		string getM_uf_origem();

		void setM_autorizacao(string value);
		string getM_autorizacao();

		void setM_autorizacao_ibama(string value);
		string getM_autorizacao_ibama();
	
};