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
	string tabela = identificador(result);
	cout<<"tabela: "<<tabela<<endl;
	receberValores(tabela);
	
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
	animal->setM_nome_cientifico("ghatos");
	animal->setM_classe("Bichano");
	animal->setM_sexo('c');
	animal->setM_dieta("Come pa crl");
	//Veterinario
	//Tratador
	animal->setM_nome_batismo("Garfield");

	//cout<<animal->getM_nome_batismo()<<endl;
}

void receberValores(string value)
{
	if (value.compare("anfibio_exotico") == 0)
	{
		/* code */
		AnfibioExotico* anf_exo = new AnfibioExotico();
		receberValoresAnimal(anf_exo);
		receberValoresAnfibio(anf_exo);
		receberValoresExotico(anf_exo);
		cout<<anf_exo->mysql_insert("teste")<<endl;

	}else if (value.compare("ave_exotico") == 0)
	{
		AveExotico* ave_exo = new AveExotico();
			receberValoresAnimal(ave_exo);
			receberValoresAve(ave_exo);
			receberValoresExotico(ave_exo);

	}else if (value.compare("mamifero_exotico") == 0)
	{
		/* code */
		MamiferoExotico* mam_exo = new MamiferoExotico();
			receberValoresAnimal(mam_exo);
			receberValoresMamifero(mam_exo);
			receberValoresExotico(mam_exo);

	}else if (value.compare("reptil_exotico") == 0)
	{
		/* code */
		ReptilExotico* rep_exo = new ReptilExotico();
			receberValoresAnimal(rep_exo);
			receberValoresReptil(rep_exo);
			receberValoresExotico(rep_exo);

	}else if (value.compare("anfibio_nativo") == 0)
	{
		/* code */
		AnfibioNativo* anf_nat = new AnfibioNativo();
			receberValoresAnimal(anf_nat);
			receberValoresAnfibio(anf_nat);
			receberValoresNativo(anf_nat);

	}else if (value.compare("ave_nativo") == 0)
	{
		/* code */
		AveNativo* ave_nat = new AveNativo();
			receberValoresAnimal(ave_nat);
			receberValoresAve(ave_nat);
			receberValoresNativo(ave_nat);

	}else if (value.compare("mamifero_nativo") == 0)
	{
		/* code */
		MamiferoNativo* mam_nat = new MamiferoNativo();
			receberValoresAnimal(mam_nat);
			receberValoresMamifero(mam_nat);
			receberValoresNativo(mam_nat);

	}else if (value.compare("reptil_nativo") == 0)
	{
		/* code */
		ReptilNativo* rep_nat = new ReptilNativo();
			receberValoresAnimal(rep_nat);
			receberValoresReptil(rep_nat);
			receberValoresNativo(rep_nat);
	}
}

string identificador(int num)
{
	
	switch(num)
	{
		case 6://AnfibioExotico
			{ 
			cout<<"AnfibioExotico"<<endl;//flag
			return "anfibio_exotico";
			}
			break;
		case 7://AveExotico
			{
			cout<<"AveExotico"<<endl;
			return "ave_exotico";
			}
			break;
		case 8://MamiferoExotico
			{
			cout<<"MamiferoExotico"<<endl;
			return "mamifero_exotico";
			}
			break;
		case 9://ReptilExotico
			{
			cout<<"ReptilExotico"<<endl;
			return "reptil_exotico";
			}
			break;
		case 10://AnfibioNativo
			{
			cout<<"AnfibioNativo"<<endl;
			return "anfibio_nativo";
			}
			break;
		case 11://AveNativo
			{
			cout<<"AveNativo"<<endl;
			return "ave_nativo";
			}
			break;
		case 12://MamiferoNativo
			{
			cout<<"MamiferoNativo"<<endl;
			return "mamifero_nativo";
			}
			break;
		case 13://ReptilNativo
			{
			cout<<"ReptilNativo"<<endl;
			return "reptil_nativo";
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
	ptr->setM_autorizacao_ibama("pode levar");
	//cout<<ptr->getM_pais_origem()<<endl;
}
template <typename T>
void receberValoresNativo(T* ptr)
{
	ptr->setM_uf_origem("Sei la");
	ptr->setM_autorizacao("deixa");
	ptr->setM_autorizacao_ibama("leva");
	//cout<<"template Nativo: "<<ptr->getM_nome_batismo()<<endl;
}

//______________________________________________
//Remoção

void remocaoAnimal()
{
	verificarExistenciaAnimalbyID("123");
	string tag = tagRemocao("tabela", "123");
}

string tagRemocao(string nome_tabela, string id_animal)
{
	string cmd;

	cmd = "DELETE FROM " +	nome_tabela
						 +	" WHERE ID="
						 +	id_animal + ";";

	cout<<cmd<<endl;//flag
	return cmd;
}

int verificarExistenciaAnimalbyID(string id)
{
	string cmd;

	cmd = "SELECT * FROM Animais WHERE ID="+id+";";

	cout << cmd <<endl;//flag
	return 0;
}

int verificarExistenciaPessoabyID(string id)
{
	string cmd;

	cmd = "SELECT * FROM Funcionarios WHERE ID="+id+";";

	cout << cmd <<endl;//flag
	return 0;
}
//______________________________________________
//Alteração de dados de um animal

void alteracaoAnimal()
{
	string tabela, campo, novo_valor;
	//escolher classe e tipo
	tabela = identificador(classeAnimal());
	//receber e verificar existencia do id
	//campo
	campo = identificarCampo(tabela);

	cout<<"Novo Valor: ";
	cin>>novo_valor;
	cout<<"campo: "<<campo<<endl;

	string tag = tagAlteracao(tabela, "123", campo, novo_valor);

	cout<<tag<<endl;;
}


string tagAlteracao(string nome_tabela, string id_animal, string campo, string valor)
{
	string cmd = "ALTER "+campo+" FOR "+valor+" WHERE ID="+id_animal+";";
	return cmd;
}

string identificarCampo(string tabela)
{
	string campo;
	int escolha;
	if (tabela.compare("anfibio_exotico") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Total de mudas\n10 - Pais de Origem\n11 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			/* code */
			cout<<"escolha: "<< escolha <<endl;
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			/* code */
			cout<<"escolha: "<< escolha <<endl;
			campo = "total_mudas";
		}else if (escolha > 9 && escolha < 12)
		{
			cout<<"escolha: "<< escolha <<endl;
			campo = camposAnimalExotico(escolha);
		}
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("ave_exotico") == 0)
	{
		/* code */

	}else if (tabela.compare("mamifero_exotico") == 0)
	{
		/* code */

	}else if (tabela.compare("reptil_exotico") == 0)
	{
		/* code */

	}else if (tabela.compare("anfibio_nativo") == 0)
	{
		/* code */

	}else if (tabela.compare("ave_nativo") == 0)
	{
		/* code */

	}else if (tabela.compare("mamifero_nativo") == 0)
	{
		/* code */

	}else if (tabela.compare("reptil_nativo") == 0)
	{
		/* code */
	}
	return campo;
}
string camposAnimal(int num)
{
	string campo;
	switch(num)
	{
		case 1:
			campo = "nome_cientifico";
			break;

		case 2:
			campo = "classe";
			break;

		case 3:
			campo = "sexo";
			break;

		case 4:
			campo = "dieta";
			break;

		case 5:
			campo = "veterinario";
			break;

		case 6:
			campo = "tratador";
			break;

		case 7:
			campo = "nome_batismo";
			break;
	}
	return campo;
}
string camposAnimalExotico(int num)
{
	if (num == 10)
	{
		return "pais_origem";
	}else
	{
		return "autorizacao_ibama";
	}
}
string camposAnimalNativo(int num)
{
	if (num == 10)
	{
		return "uf_origem";
	}else if (num == 11)
	{
		return "autorizacao";
	}else
	{
		return "autorizacao_ibama";
	}
}