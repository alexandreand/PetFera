#include "../include/Controlador.hpp"
//Função de testes
void controlar()
{
	AnfibioExotico* ae1 = new AnfibioExotico;
	Ave* a1 = new Ave;
	Tratador* t1 = new Tratador;
	Funcionario* f1 = new Funcionario;
	Veterinario* v1 = new Veterinario;
	Animal* a = new Animal;
}


void cadastro()
{
	int result = classeAnimal();
	cout<<result<<endl;
	identificador(result);
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

Animal receberValoresAnimal()
{
	Animal* animal = new Animal();
	animal->setM_classe("Bichano");
	animal->setM_nome_cientifico("ghatos");
	animal->setM_sexo('c');
	animal->setM_dieta("Come pa crl");
	//Veterinario
	//Tratador
	animal->setM_nome_batismo("Garfield");

	cout<<animal->getM_nome_batismo()<<endl;
	cout<<"ola"<<endl;
	return *animal;
}

void identificador(int num)
{
	switch(num)
	{
		case 6://AnfibioExotico
			{ 
			
			//Animal* a;
			cout<<"AnfibioExotico"<<endl;
			Animal* a = new Animal();
			cout<<"Ola"<<endl;
			*a = receberValoresAnimal();
			//cout<<a.getM_nome_batismo()<<endl;
			//cout<<"ola"<<endl;
			}
			break;
		case 7://AveExotica
			cout<<"AveExotico"<<endl;
			break;
		case 8://MamiferoExotico
			cout<<"MamiferoExotico"<<endl;
			break;
		case 9://ReptilExotico
			cout<<"ReptilExotico"<<endl;
			break;
		case 10://AnfibioNativo
			cout<<"AnfibioNativo"<<endl;
			break;
		case 11://AveNativo
			cout<<"AveNativo"<<endl;
			break;
		case 12://MamiferoNativo
			cout<<"MamiferoNativo"<<endl;
			break;
		case 13://ReptilNativo
			cout<<"ReptilNativo"<<endl;
			break;
	}
}

void receberValoresAnfibio()
{

}

void receberValoresAve()
{

}

void receberValoresMamifero()
{

}

void receberValoresReptil()
{

}

void receberValoresAnfExot()
{

}

void receberValoresAveExot()
{
	
}

void receberValoresMamExot()
{
	
}

void receberValoresRepExot()
{
	
}

void receberValoresAnfNat()
{
	
}

void receberValoresAveNat()
{
	
}

void receberValoresMamNat()
{
	
}

void receberValoresRepNat()
{
	
}
void cadastrar()
{

}