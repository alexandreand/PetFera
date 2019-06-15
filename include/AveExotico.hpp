#include "Ave.hpp"
#include <string>

class AveExotico : public Ave
{
private:
	string m_pais_origem;
	string m_autorizacao_ibama;

public:
	AveExotico();
	~AveExotico();
	
	void setM_pais_origem(string value);
	string getM_pais_origem();

	void setM_autorizacao_ibama(string value);
	string getM_autorizacao_ibama();
};