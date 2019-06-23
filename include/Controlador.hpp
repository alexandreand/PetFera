#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

//#include "../include/Animal.hpp"
//#include "../include/Ave.hpp"
#include "../include/AveNativo.hpp"
#include "../include/AveExotico.hpp"
//#include "../include/Anfibio.hpp"
#include "../include/AnfibioNativo.hpp"
#include "../include/AnfibioExotico.hpp"
//#include "../include/Mamifero.hpp"
#include "../include/MamiferoNativo.hpp"
#include "../include/MamiferoExotico.hpp"
//#include "../include/Reptil.hpp"
#include "../include/ReptilNativo.hpp"
#include "../include/ReptilExotico.hpp"

//#include "../include/Funcionario.hpp"
/*
#include "../include/Tratador.hpp"
#include "../include/Veterinario.hpp"
*/
#include <memory>
#include <iostream>

using namespace std;

//Cadastro de Amimais___________________
void controlar();

void cadastroAnimal();

int classeAnimal();

int tipoAnimal(int num);

void receberValores(string value);

string identificador(int num);//nomeclatura fora de contexto

template <typename T>
void receberValoresAnimal(T* animal);

template <typename T>
void receberValoresAnfibio(T* anfibio);

template <typename T>
void receberValoresAve(T* ave);

template <typename T>
void receberValoresMamifero(T* mamifero);

template <typename T>
void receberValoresReptil(T* reptil);

template <typename T>
void receberValoresExotico(T* ptr);

template <typename T>
void receberValoresNativo(T* ptr);
//_______________________________________
//Remoção
void remocaoAnimal();

string tagRemocao(string nome_tabela, string id_animal);

int verificarExistenciaAnimalbyID(string tabela, string id);//0 - Nada encontrado, 1 - Algo encontrado

int verificarExistenciaPessoabyID(string tabela, string id);//0 - Nada encontrado, 1 - Algo encontrado
//_______________________________________
//Alteração
void alteracaoAnimal();

string tagAlteracao(string nome_tabela, string id_animal, string campo, string valor);

string identificarCampo(string tabela);

string camposAnimal(int num);

string camposAnimalExotico(int num);

string camposAnimalNativo(int num);

//_______________________________________
//Consultar

void consultar();

string tagConsulta(string tabela);


//_______________________________________
//Consultar por vet ou tratador

void consultarPor_Vet_Tra();
#endif