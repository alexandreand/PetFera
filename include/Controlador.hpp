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

void controlar();

void cadastro();

int classeAnimal();

int tipoAnimal(int num);

void identificador(int num);

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

//teste



#endif