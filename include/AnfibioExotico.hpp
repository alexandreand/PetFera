#include "Anfibio.hpp"
#include <string>

class AnfibioExotico : public Anfibio
{
private:
	string m_pais_origem;
	string m_autorizacao_ibama;

public:
	AnfibioExotico();
	~AnfibioExotico();

	void setM_pais_origem(string value);
	string getM_pais_origem();

	void setM_autorizacao_ibama(string value);
	string getM_autorizacao_ibama();
};