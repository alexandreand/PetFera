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

#include <iostream>

using namespace std;

void controlar();

void cadastro();

int classeAnimal();

int tipoAnimal(int num);

int receberValores(int num);

void identificador(int num);

void cadastrar();

#endif