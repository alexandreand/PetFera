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

		cout<<ave_exo->mysql_insert("teste")<<endl;

	}else if (value.compare("mamifero_exotico") == 0)
	{
		MamiferoExotico* mam_exo = new MamiferoExotico();
		receberValoresAnimal(mam_exo);
		receberValoresMamifero(mam_exo);
		receberValoresExotico(mam_exo);

		cout<<mam_exo->mysql_insert("teste")<<endl;

	}else if (value.compare("reptil_exotico") == 0)
	{
		ReptilExotico* rep_exo = new ReptilExotico();
		receberValoresAnimal(rep_exo);
		receberValoresReptil(rep_exo);
		receberValoresExotico(rep_exo);

		cout<<rep_exo->mysql_insert("teste")<<endl;//flag

	}else if (value.compare("anfibio_nativo") == 0)
	{
		AnfibioNativo* anf_nat = new AnfibioNativo();
		receberValoresAnimal(anf_nat);
		receberValoresAnfibio(anf_nat);
		receberValoresNativo(anf_nat);

		cout<<anf_nat->mysql_insert("teste")<<endl;//flag

	}else if (value.compare("ave_nativo") == 0)
	{
		AveNativo* ave_nat = new AveNativo();
		receberValoresAnimal(ave_nat);
		receberValoresAve(ave_nat);
		receberValoresNativo(ave_nat);

		cout<<ave_nat->mysql_insert("teste")<<endl;//flag

	}else if (value.compare("mamifero_nativo") == 0)
	{
		MamiferoNativo* mam_nat = new MamiferoNativo();
		receberValoresAnimal(mam_nat);
		receberValoresMamifero(mam_nat);
		receberValoresNativo(mam_nat);

		cout<<mam_nat->mysql_insert("teste")<<endl;//flag

	}else if (value.compare("reptil_nativo") == 0)
	{
		ReptilNativo* rep_nat = new ReptilNativo();
		receberValoresAnimal(rep_nat);
		receberValoresReptil(rep_nat);
		receberValoresNativo(rep_nat);

		cout<<rep_nat->mysql_insert("teste")<<endl;//flag
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
	reptil->setM_venenoso(1);
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
	string tabela, id_animal;
	int validadeID;

	cout<<"Escolha o conjunto de Animais"<<endl;
	tabela = identificador(classeAnimal());

	while(validadeID != 1)
	{
		cout<<"Digite o Id do Animal: ";
		cin>>id_animal;

		validadeID = verificarExistenciaAnimalbyID(tabela, id_animal);
		break;
		if(validadeID == 0)
		{
			cout<<"Nada encontrado"<<endl;
		}
	}

	string tag = tagRemocao(tabela, id_animal);//tag usada pra a função mysql_query
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

int verificarExistenciaAnimalbyID(string tabela, string id)
{
	string cmd;

	cmd = "SELECT * FROM "+ tabela +" WHERE ID="+id+";";

	cout << cmd <<endl;//flag
	return 0;
}

int verificarExistenciaPessoabyID(string tabela, string id)
{
	string cmd;

	cmd = "SELECT * FROM " + tabela + " WHERE ID=" + id + ";";

	cout << cmd <<endl;//flag
	return 0;
}
//______________________________________________
//Alteração de dados de um animal

void alteracaoAnimal()
{
	string tabela, campo, novo_valor, id_animal;
	int validadeID = 1;
	//escolher classe e tipo
	tabela = identificador(classeAnimal());

	//receber e verificar existencia do id
	while(validadeID != 1)
	{
		cout<<"Digite o Id do Animal: ";
		cin>>id_animal;

		validadeID = verificarExistenciaAnimalbyID(tabela, id_animal);
		break;
		if(validadeID == 0)
		{
			cout<<"Nada encontrado"<<endl;
		}
	}

	//campo
	campo = identificarCampo(tabela);

	//Novo valor
	cout<<"Novo Valor: ";
	cin>>novo_valor;
	cout<<"campo: "<<campo<<endl;

	string tag = tagAlteracao(tabela, id_animal, campo, novo_valor);

	cout<<tag<<endl;
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
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "total_mudas";
		}else if (escolha > 9 && escolha < 12)
		{
			campo = camposAnimalExotico(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("ave_exotico") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Tamanho do bico\n9 - Envergadura da asa\n10 - Pais de Origem\n11 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "tam_bico";
		}else if (escolha == 9)
		{
			campo = "env_asas";
		}else if (escolha > 9 && escolha < 12)
		{
			campo = camposAnimalExotico(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("mamifero_exotico") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Cor da pele\n10 - Pais de Origem\n11 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "cor_pelo";
		}else if (escolha > 9 && escolha < 12)
		{
			campo = camposAnimalExotico(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("reptil_exotico") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Venenoso(0 ou 1)\n9 - Tipo do veneno\n10 - Pais de Origem\n11 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "venenoso";
		}else if (escolha == 9)
		{
			campo = "tipo_veneno";
		}else if (escolha > 9 && escolha < 12)
		{
			campo = camposAnimalExotico(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("anfibio_nativo") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Total de mudas\n10 - UF de origem\n11 - Autorização\n12 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "total_mudas";
		}else if (escolha > 9 && escolha < 13)
		{
			campo = camposAnimalNativo(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("ave_nativo") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Tamanho do bico\n9 - Envergadura da asa\n10 - UF de origem\n11 - Autorização\n12 - Autorização do Ibama";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "tam_bico";
		}else if (escolha == 9)
		{
			campo = "env_asas";
		}else if (escolha > 9 && escolha < 13)
		{
			campo = camposAnimalNativo(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("mamifero_nativo") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Cor da pele\n10 - UF de origem\n11 - Autorização\n12 - Autorização do Ibama";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "cor_pelo";
		}else if (escolha > 9 && escolha < 13)
		{
			campo = camposAnimalNativo(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;

	}else if (tabela.compare("reptil_nativo") == 0)
	{
		cout<< "1 - Nome Científico\n2 - Classe\n3 - Sexo\n4 - Dieta\n5 - Veterinario\n6 - Tratador\n7 - Nome Batismo\n8 - Venenoso(0 ou 1)\n9 - Tipo do veneno\n10 - Pais de Origem\n11 - Autorização do Ibama\n";
		cin>>escolha;
		if (escolha > 0 && escolha < 8)
		{
			campo = camposAnimal(escolha);
		}else if (escolha == 8)
		{
			campo = "venenoso";
		}else if (escolha == 9)
		{
			campo = "tipo_veneno";
		}else if (escolha > 9 && escolha < 13)
		{
			campo = camposAnimalExotico(escolha);
		}
		
		cout<<"escolha: "<< escolha <<endl;
		cout <<"campo: "<<campo<<endl;
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

//______________________________________________
//Consutar

void consultar()
{
	int escolha;
	cout<<"1 - Por classe\n2 - Por Classe e tipo\n3 - Todos os Animais cadastrados\n4 - por ID"<<endl;
	cin>>escolha;
	if (escolha == 1)
	{
		
	}else if (escolha == 2)
	{
		string tabela = identificador(classeAnimal());
		string tag = tagConsulta(tabela);

		cout<<tag<<endl;
	}else if (escolha == 3)
	{

	}
	else
	{
		cout<<"Opção Invalida"<<endl;
	}
}

string tagConsulta(string tabela)
{
	string cmd = "SELECT * FROM "+tabela+";";

	return cmd;
}