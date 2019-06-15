//#include "Controlador.cpp"

#include <iostream>

using namespace std;
int menu()
{
	int escolha = 0;

	cin>>escolha;
	switch(escolha)
	{
		case 1://Cadastro ​ de um novo animal a ser comercializado

			break;

		case 2://Remoção ​ de um animal da lista após a sua comercialização;

			break;

		case 3://Alteração ​ dos dados cadastrais de um animal;  
		
			break;

		case 4://Consulta ​ aos dados cadastrais de um determinado animal ou por uma classe de animais;

			break;

		case 5://Consulta ​ de animais sob a responsabilidade de um determinado ​ Veterinário ​ ou ​ Tratador;

			break;

		case 6://

			break;
		default:
			cout<<"Errado"<<endl;

	}
	return 0;
}