CC=g++
C_FLAGS = -std=c++11
obj = Animal.o Funcionario.o Tratador.o Veterinario.o Anfibio.o Ave.o Mamifero.o Reptil.o AnfibioNativo.o AveNativo.o MamiferoNativo.o ReptilNativo.o AnfibioExotico.o MamiferoExotico.o AveExotico.o Controlador.o ReptilExotico.o Menu.o
all: $(obj) main

main: main.cpp
	$(CC) $(C_FLAGS) main.cpp $(obj) -o main

Animal.o: ../include/Animal.hpp ../src/Animal.cpp
	$(CC) ../src/Animal.cpp -c

Funcionario.o: ../include/Funcionario.hpp ../src/Funcionario.cpp
	$(CC) ../src/Funcionario.cpp -c

Tratador.o: ../include/Tratador.hpp ../src/Tratador.cpp
	$(CC) ../src/Tratador.cpp -c

Veterinario.o: ../include/Veterinario.hpp ../src/Veterinario.cpp
	$(CC) ../src/Veterinario.cpp -c

Anfibio.o: ../include/Anfibio.hpp ../src/Anfibio.cpp
	$(CC) ../src/Anfibio.cpp -c

Ave.o: ../include/Ave.hpp ../src/Ave.cpp
	$(CC) ../src/Ave.cpp -c

Mamifero.o: ../include/Mamifero.hpp ../src/Mamifero.cpp
	$(CC) ../src/Mamifero.cpp -c

Reptil.o: ../include/Reptil.hpp ../src/Reptil.cpp
	$(CC) ../src/Reptil.cpp -c

AnfibioNativo.o: ../include/AnfibioNativo.hpp ../src/AnfibioNativo.cpp
	$(CC) ../src/AnfibioNativo.cpp -c

AnfibioExotico.o: ../include/AnfibioExotico.hpp ../src/AnfibioExotico.cpp
	$(CC) ../src/AnfibioExotico.cpp -c

AveNativo.o: ../include/AveNativo.hpp ../src/AveNativo.cpp
	$(CC) ../src/AveNativo.cpp -c

AveExotico.o: ../include/AveExotico.hpp ../src/AveExotico.cpp
	$(CC) ../src/AveExotico.cpp -c

MamiferoNativo.o: ../include/MamiferoNativo.hpp ../src/MamiferoNativo.cpp
	$(CC) ../src/MamiferoNativo.cpp -c

MamiferoExotico.o: ../include/MamiferoExotico.hpp ../src/MamiferoExotico.cpp
	$(CC) ../src/MamiferoExotico.cpp -c

ReptilNativo.o: ../include/ReptilNativo.hpp ../src/ReptilNativo.cpp
	$(CC) ../src/ReptilNativo.cpp -c

ReptilExotico.o: ../include/ReptilExotico.hpp ../src/ReptilExotico.cpp
	$(CC) ../src/ReptilExotico.cpp -c

Controlador.o: ../src/Controlador.cpp ../include/Controlador.hpp
	$(CC) ../src/Controlador.cpp -c

Menu.o: ../src/Menu.cpp ../include/Menu.hpp
	$(CC) ../src/Menu.cpp -c

clear:
	rm *.o
	rm main


