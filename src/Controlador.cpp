#include "../include/Controlador.hpp"
//Função de testes
void controlar()
{
	AnfibioExotico* ae1 = new AnfibioExotico;
	Ave* a1 = new Ave;
	Tratador* t1 = new Tratador;
	Funcionario* f1 = new Funcionario;
	Veterinario* v1 = new Veterinario;
}


void cadastro()
{
	int result = classeAnimal();
	receberValores(result);
}

int classeAnimal()
{
	int escolha = 0;
	int result;
	cout<<"1 - Anfibio\n2 - Ave\n3 - Mamifero\n4 - Reptil"<<endl;
	cin>>escolha;
	return tipoAnimal(escolha);

}
int tipoAnimal(int num)
{
	int escolha;
	cout<<"1 - Exótico\n2 - Nativo"<<endl;
	cin>>escolha;
	switch(escolha)
	{
		case 1:
			return num+=5;
		case 2:
			return num+=9;
	}
	return 0;
}

void identificador(int num)
{
	switch(num)
	{
		case 6://AnfibioExotico

			break;
		case 7://AveExotica

			break;
		case 8://MamiferoExotico

			break;
		case 9://ReptilExotico

			break;
		case 10://AnfibioNativo

			break;
		case 11://AveNativo

			break;
		case 12://MamiferoNativo

			break;
		case 13://ReptilNativo

			break;
	}
}
int receberValores(int num)
{

}
void cadastrar()
{

}