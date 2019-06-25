#include <iostream>
#include "../dao/tratador_dao.cpp"

#ifndef TRATADOR_HPP
#define TRATADOR_HPP
#include "../include/Tratador.hpp"
#endif

using namespace std;

int main(int argc, char const *argv[]){
	int escolha = 0;
	cout << "Bem vinda(a) ao PetFera:\n\n --> Menu:\n";
	
	string temp;
	char temp2;
	short temp3;
	
	cout<<"-> 1 - Cadastro\n-> 2 - Remoção\n-> 3 - Alteração\n-> 4 - Consulta\n-> 5 - Consulta de animais de um Vet ou Tra\n-> 6 - Cadastrar Tratador\n-> 7 - Remover Tratador\n-> 8 - Listar Tratador\n" << "--> Escolha: ";

	cin>>escolha;
	switch(escolha){
		case 6:
			tratador_dao dao{};
			Tratador t{};
			cout << "Dados do tratador: \n";
			
			cout << "-> Digite o nome: \n";
			cin >> temp;
			t.setM_nome(temp);
			
			cout << "-> Digite o cpf: \n";
			cin >> temp;
			t.setM_cpf(temp);

			cout << "-> Digite a especialidade: \n";
			cin >> temp;
			t.setM_especialidade(temp);

			cout << "-> Digite a idade: \n";
			cin >> temp3;
			t.setM_idade(temp3);

			cout << "-> Digite o tipo sanguineo: \n";
			cin >> temp3;
			t.setM_tipo_sanguineo(temp3);

			cout << "-> Digite o faot rh: \n";
			cin >> temp2;
			t.setM_fator_rh(temp2);
			
			cout << "-> Digite o nivel de segurança: \n";
			cin >> temp;
			t.setM_nivel_seguranca(temp);
			
			dao.save(t);

			break;
	}
	return 0;
}