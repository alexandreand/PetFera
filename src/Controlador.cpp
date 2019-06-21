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


void cadastroAnimal()
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

template <typename T>
void receberValoresAnimal(T* animal)
{
	animal->setM_classe("Bichano");
	animal->setM_nome_cientifico("ghatos");
	animal->setM_sexo('c');
	animal->setM_dieta("Come pa crl");
	//Veterinario
	//Tratador
	animal->setM_nome_batismo("Garfield");

	//cout<<animal->getM_nome_batismo()<<endl;
}

void identificador(int num)
{
	
	switch(num)
	{
		case 6://AnfibioExotico
			{ 
			cout<<"AnfibioExotico"<<endl;//flag
			AnfibioExotico* anf_exo = new AnfibioExotico();
			receberValoresAnimal(anf_exo);
			receberValoresAnfibio(anf_exo);
			receberValoresExotico(anf_exo);

			cout<<anf_exo->mysql_insert("teste")<<endl;
			}
			break;
		case 7://AveExotico
			{
			cout<<"AveExotico"<<endl;
			AveExotico* ave_exo = new AveExotico();
			receberValoresAnimal(ave_exo);
			receberValoresAve(ave_exo);
			receberValoresExotico(ave_exo);
			}
			break;
		case 8://MamiferoExotico
			{
			cout<<"MamiferoExotico"<<endl;
			MamiferoExotico* mam_exo = new MamiferoExotico();
			receberValoresAnimal(mam_exo);
			receberValoresMamifero(mam_exo);
			receberValoresExotico(mam_exo);
			}
			break;
		case 9://ReptilExotico
			{
			cout<<"ReptilExotico"<<endl;
			ReptilExotico* rep_exo = new ReptilExotico();
			receberValoresAnimal(rep_exo);
			receberValoresReptil(rep_exo);
			receberValoresExotico(rep_exo);
			}
			break;
		case 10://AnfibioNativo
			{
			cout<<"AnfibioNativo"<<endl;
			AnfibioNativo* anf_nat = new AnfibioNativo();
			receberValoresAnimal(anf_nat);
			receberValoresAnfibio(anf_nat);
			receberValoresNativo(anf_nat);
			}
			break;
		case 11://AveNativo
			{
			cout<<"AveNativo"<<endl;
			AveNativo* ave_nat = new AveNativo();
			receberValoresAnimal(ave_nat);
			receberValoresAve(ave_nat);
			receberValoresNativo(ave_nat);
			}
			break;
		case 12://MamiferoNativo
			{
			cout<<"MamiferoNativo"<<endl;
			MamiferoNativo* mam_nat = new MamiferoNativo();
			receberValoresAnimal(mam_nat);
			receberValoresMamifero(mam_nat);
			receberValoresNativo(mam_nat);
			}
			break;
		case 13://ReptilNativo
			{
			cout<<"ReptilNativo"<<endl;
			ReptilNativo* rep_nat = new ReptilNativo();
			receberValoresAnimal(rep_nat);
			receberValoresReptil(rep_nat);
			receberValoresNativo(rep_nat);
			}
			break;
	}
}




template <typename T>
void receberValoresAnfibio(T* anfibio)
{
	anfibio->setM_total_mudas(2);
	//anfibio->setM_ultima_muda();
}

template <typename T>
void receberValoresAve(T* ave)
{
	ave->setM_tam_bico(12.32);
	ave->setM_env_asas(32.2);
}

template <typename T>
void receberValoresMamifero(T* mamifero)
{
	mamifero->setM_cor_pelo("vermelha");
}

template <typename T>
void receberValoresReptil(T* reptil)
{
	reptil->setM_venenoso(true);
	reptil->setM_tipo_veneno("de morrer");
}

template <typename T>
void receberValoresExotico(T* ptr)
{
	//cout<<"template Exotico: "<<ptr->getM_nome_batismo()<<endl;
	ptr->setM_pais_origem("Brazil");
	//cout<<ptr->getM_pais_origem()<<endl;
}
template <typename T>
void receberValoresNativo(T* ptr)
{
	//cout<<"template Nativo: "<<ptr->getM_nome_batismo()<<endl;
}

//______________________________________________
//Consultar

void remocaoAnimal()
{
	string teste = tagRemocao("tabela", "123");
}

string tagRemocao(string nome_tabela, string id_animal)
{
	string cmd;

	cmd = "DELETE FROM " +	nome_tabela
						 +	" WHERE ID="
						 +	id_animal + ";";

	cout<<cmd<<endl;
	return "a";
}