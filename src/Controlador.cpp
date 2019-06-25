#include "../include/Controlador.hpp"

void cadastroAnimal()
{
	string tabela = identificador(classeAnimal());
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
	string valor, id_pessoa;
	char sexo;
	int validadeID;

	cout<<"Nome Científico: ";
	cin>>valor;
	animal->setM_nome_cientifico(valor);

	cout<<"Classe: ";
	cin>>valor;
	animal->setM_classe(valor);

	cout<<"Sexo:(M ou F) ";
	cin>>sexo;
	animal->setM_sexo(sexo);

	cout<<"Dieta: ";
	cin>>valor;
	animal->setM_dieta(valor);

	//Veterinario
	while(validadeID != 1)
	{
		cout<<"ID do veterinário: ";
		cin>>id_pessoa;
		validadeID = verificarExistenciabyID("veterinario", id_pessoa);
		if (validadeID == 0)
		{
			cout<<"Nenhum veterinário encontrado"<<endl;
			break;//retirar
		}
	}
	//Tratador
	validadeID = 0;
	while(validadeID != 1)
	{
		cout<<"ID do tratador: ";
		cin>>id_pessoa;
		validadeID = verificarExistenciabyID("tratador", id_pessoa);
		if (validadeID == 0)
		{
			cout<<"Nenhum tratador encontrado"<<endl;
			break;//retirar
		}
	}

	cout<<"Nome de batismo: ";
	cin>>valor;
	animal->setM_nome_batismo("Garfield");

}

void receberValores(string value)
{
	if (value.compare("anfibio_exotico") == 0)
	{
		AnfibioExotico* anf_exo = new AnfibioExotico();
		receberValoresAnimal(anf_exo);
		receberValoresAnfibio(anf_exo);
		receberValoresExotico(anf_exo);

		cout<<anf_exo->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("ave_exotico") == 0)
	{

		AveExotico* ave_exo = new AveExotico();
		receberValoresAnimal(ave_exo);
		receberValoresAve(ave_exo);
		receberValoresExotico(ave_exo);

		cout<<ave_exo->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("mamifero_exotico") == 0)
	{
		MamiferoExotico* mam_exo = new MamiferoExotico();
		receberValoresAnimal(mam_exo);
		receberValoresMamifero(mam_exo);
		receberValoresExotico(mam_exo);

		cout<<mam_exo->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("reptil_exotico") == 0)
	{
		ReptilExotico* rep_exo = new ReptilExotico();
		receberValoresAnimal(rep_exo);
		receberValoresReptil(rep_exo);
		receberValoresExotico(rep_exo);

		cout<<rep_exo->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("anfibio_nativo") == 0)
	{
		AnfibioNativo* anf_nat = new AnfibioNativo();
		receberValoresAnimal(anf_nat);
		receberValoresAnfibio(anf_nat);
		receberValoresNativo(anf_nat);

		cout<<anf_nat->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("ave_nativo") == 0)
	{
		AveNativo* ave_nat = new AveNativo();
		receberValoresAnimal(ave_nat);
		receberValoresAve(ave_nat);
		receberValoresNativo(ave_nat);

		cout<<ave_nat->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("mamifero_nativo") == 0)
	{
		MamiferoNativo* mam_nat = new MamiferoNativo();
		receberValoresAnimal(mam_nat);
		receberValoresMamifero(mam_nat);
		receberValoresNativo(mam_nat);

		cout<<mam_nat->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query

	}else if (value.compare("reptil_nativo") == 0)
	{
		ReptilNativo* rep_nat = new ReptilNativo();
		receberValoresAnimal(rep_nat);
		receberValoresReptil(rep_nat);
		receberValoresNativo(rep_nat);

		cout<<rep_nat->mysql_insert("teste")<<endl;//tag usada pra a função mysql_query
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
	int total_mudas;

	cout<<"Total de mudas: ";
	cin>>total_mudas;
	anfibio->setM_total_mudas(total_mudas);
}

template <typename T>
void receberValoresAve(T* ave)
{
	double valor;

	cout<<"Tamanho do bico: ";
	cin>>valor;
	ave->setM_tam_bico(valor);

	cout<<"Envergadura da asa: ";
	cin>>valor;
	ave->setM_env_asas(valor);
}

template <typename T>
void receberValoresMamifero(T* mamifero)
{
	string cor_pelo;

	cout<<"Cor do pelo: ";
	cin>>cor_pelo;
	mamifero->setM_cor_pelo(cor_pelo);
}

template <typename T>
void receberValoresReptil(T* reptil)
{
	int venenoso;
	string tipo_veneno;

	cout<<"Venenoso: (1 - Sim; 2 - Não) ";
	cin>>venenoso;
	reptil->setM_venenoso(venenoso);

	cout<<"Tipo do veneno: ";
	cin>>tipo_veneno;
	reptil->setM_tipo_veneno(tipo_veneno);
}

template <typename T>
void receberValoresExotico(T* ptr)
{
	string valor;

	cout<<"Pais de origem: ";
	cin>>valor;
	ptr->setM_pais_origem(valor);

	cout<<"Autorização do ibama: ";
	cin>>valor;
	ptr->setM_autorizacao_ibama(valor);
}
template <typename T>
void receberValoresNativo(T* ptr)
{
	string valor;

	cout<<"UF de origem: ";
	cin>>valor;
	ptr->setM_uf_origem(valor);

	cout<<"Autorização: ";
	cin>>valor;
	ptr->setM_autorizacao(valor);

	cout<<"Autorização do ibama: ";
	cin>>valor;
	ptr->setM_autorizacao_ibama(valor);
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

		validadeID = verificarExistenciabyID(tabela, id_animal);
		break;
		if(validadeID == 0)
		{
			cout<<"Nada encontrado"<<endl;
		}
		else
		{
			string tag = tagRemocao(tabela, id_animal);//tag usada pra a função mysql_query
		}
	}
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

//PRECISA SER TERMINADA
int verificarExistenciabyID(string tabela, string id)
{
	string cmd;

	cmd = "SELECT * FROM "+ tabela +" WHERE ID="+id+";";

	cout << cmd <<endl;//flag
	return 0;
}
//______________________________________________
//Alteração de dados de um animal

void alteracaoAnimal()
{
	string tabela, campo, novo_valor, id_animal;
	int validadeID;

	tabela = identificador(classeAnimal());

	while(validadeID != 1)
	{
		cout<<"Digite o Id do Animal: ";
		cin>>id_animal;

		validadeID = verificarExistenciabyID(tabela, id_animal);
		break;
		if(validadeID == 0)
		{
			cout<<"Nada encontrado"<<endl;
		}
	}

	campo = identificarCampo(tabela);

	cout<<"Novo Valor: ";
	cin>>novo_valor;

	string tag = tagAlteracao(tabela, id_animal, campo, novo_valor);//tag usada pra a função mysql_query
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

	while(1){
	cout<<"1 - Por classe\n2 - Por Classe e tipo\n3 - Todos os Animais cadastrados\n"<<endl;
	cin>>escolha;
	if (escolha == 1)
	{
		cout<<"1 - Anfibio\n2 - Ave\n3 - Mamifero\n4 - Réptil"<<endl;
		cin>>escolha;
		if (escolha == 1)
		{
			tagConsulta("anfibio_exotico");
			tagConsulta("anfibio_nativo");
		}else if (escolha == 2)
		{
			tagConsulta("ave_exotico");
			tagConsulta("ave_nativo");
		}else if (escolha == 3)
		{
			tagConsulta("mamifero_exotico");
			tagConsulta("mamifero_nativo");
		}else if (escolha == 4)
		{
			tagConsulta("reptil_exotico");
			tagConsulta("reptil_nativo");
		}else
		{
			cout<<"Escolha invalida"<<endl;
		}
	}else if (escolha == 2)
	{
		string tag = tagConsulta(identificador(classeAnimal()));//tag usada pra a função mysql_query
	}else if (escolha == 3)
	{
		tagConsulta("anfibio_exotico");//tag usada pra a função mysql_query
		tagConsulta("anfibio_nativo");//tag usada pra a função mysql_query
		tagConsulta("ave_exotico");//tag usada pra a função mysql_query
		tagConsulta("ave_nativo");//tag usada pra a função mysql_query
		tagConsulta("mamifero_exotico");//tag usada pra a função mysql_query
		tagConsulta("mamifero_nativo");//tag usada pra a função mysql_query
		tagConsulta("reptil_exotico");//tag usada pra a função mysql_query
		tagConsulta("reptil_nativo");//tag usada pra a função mysql_query
	}
	else
	{
		cout<<"Opção Invalida"<<endl;
		break;
	}
}
}

string tagConsulta(string tabela)
{
	string cmd = "SELECT * FROM "+tabela+";";

	cout<<cmd<<endl;
	return cmd;
}

//______________________________________________
//Consultar por vet ou tratador

void consultarPor_Vet_Tra()
{
	int escolha, validadeID;
	string id_pessoa;

	cout<<"1 - Veterinário\n2 - Tratador"<<endl;
	cin>>escolha;
	if (escolha == 1)
	{
		while(validadeID != 1){
			cout<<"Informe o ID do veterinário: ";
			cin>>id_pessoa;
			validadeID = verificarExistenciabyID("veterinario", id_pessoa);
			break;
			if (validadeID == 0)
			{
				cout<<"Nenhum Veterinário encontrado"<<endl;
			}
		}
	}else if (escolha == 2)
	{
		while(validadeID != 1){
			cout<<"Informe o ID do tratador: ";
			cin>>id_pessoa;
			validadeID = verificarExistenciabyID("tratador", id_pessoa);
			break;
			if (validadeID == 0)
			{
				cout<<"Nenhum Tratador encontrado"<<endl;
			}
		}
	}else
	{
		cout<<"Opção invalida"<<endl;
	}
}

//______________________________________________
//Cadastrar Funcionario

void cadastrarFuncionario()
{
	int escolha;

	cout<<"1 - Veterinário\n2 - Tratador"<<endl;
	cin>>escolha;

	if (escolha == 1)
	{
		Veterinario* vet = new Veterinario();
		string valor;

		receberValoresFuncionario(vet);

		cout<<"CRMV: ";
		cin>>valor;
		vet->setM_crmv(valor);

		cout<<vet->mysql_insert("veterianario")<<endl;//tag usada pra a função mysql_query

	}else if (escolha == 2)
	{
		Tratador* trat = new Tratador();
		string valor;

		receberValoresFuncionario(trat);

		cout<<"Nivel de segurança: ";
		cin>>valor;
		trat->setM_nivel_seguranca(valor);

		cout<<trat->mysql_insert("tratador")<<endl;//tag usada pra a função mysql_query
		
	}else
	{
		cout<<"Opção invalida"<<endl;
	}
}

template <typename T>
void receberValoresFuncionario(T* funcionario)
{
	short idade, tipo_sanguineo;
	string valor;
	char fator_rh;

	cout<<"Nome: ";
	cin>>valor;
	funcionario->setM_nome(valor);

	cout<<"CPF: ";
	cin>>valor;
	funcionario->setM_cpf(valor);

	cout<<"Especialidade: ";
	cin>>valor;
	funcionario->setM_especialidade(valor);

	cout<<"Idade: ";
	cin>>idade;
	funcionario->setM_idade(idade);

	cout<<"Tipo sanguineo: ";
	cin>>tipo_sanguineo;
	funcionario->setM_tipo_sanguineo(tipo_sanguineo);

	cout<<"Fator RH: ";
	cin>>fator_rh;
	funcionario->setM_fator_rh(fator_rh);
}

//______________________________________________
//Remover Funcioanrio

void removerFuncionario()
{
	int escolha, validadeID;
	string id_pessoa;

	cout<<"1 - Veterinário\n2 - Tratador"<<endl;
	cin>>escolha;
	if (escolha == 1)
	{
		while(validadeID != 1){
			cout<<"Informe o ID do veterinário: ";
			cin>>id_pessoa;
			validadeID = verificarExistenciabyID("veterinario", id_pessoa);
			break;
			if (validadeID == 0)
			{
				cout<<"Nenhum Veterinário encontrado"<<endl;
			}
			else
			{
				tagRemocao("veterinario", id_pessoa);//tag usada pra a função mysql_query
			}
		}
	}else if (escolha == 2)
	{
		while(validadeID != 1){
			cout<<"Informe o ID do tratador: ";
			cin>>id_pessoa;
			validadeID = verificarExistenciabyID("tratador", id_pessoa);
			break;
			if (validadeID == 0)
			{
				cout<<"Nenhum Tratador encontrado"<<endl;
			}
			else
			{
				tagRemocao("tratador", id_pessoa);//tag usada pra a função mysql_query
			}
		}
	}else
	{
		cout<<"Opção invalida"<<endl;
	}
}