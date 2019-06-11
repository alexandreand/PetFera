#include<time.h>

using namespace std;

class Anfibio{
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