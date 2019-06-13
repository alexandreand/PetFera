CC=g++
obj = animal.o funcionario.o tratador.o veterinario.o anfibio.o ave.o mamifero.o reptil.o

all: $(obj)

animal.o: ../include/Animal.hpp ../src/Animal.cpp
	$(CC) ../src/Animal.cpp -c

funcionario.o: ../include/Funcionario.hpp ../src/Funcionario.cpp
	$(CC) ../src/Funcionario.cpp -c

tratador.o: ../include/Tratador.hpp ../src/Tratador.cpp
	$(CC) ../src/Tratador.cpp -c

veterinario.o: ../include/Veterinario.hpp ../src/Veterinario.cpp
	$(CC) ../src/Veterinario.cpp -c

anfibio.o: ../include/Anfibio.hpp ../src/Anfibio.cpp
	$(CC) ../src/Anfibio.cpp -c

ave.o: ../include/Ave.hpp ../src/Ave.cpp
	$(CC) ../src/Ave.cpp -c

mamifero.o: ../include/Mamifero.hpp ../src/Mamifero.cpp
	$(CC) ../src/Mamifero.cpp -c

reptil.o: ../include/Reptil.hpp ../src/Reptil.cpp
	$(CC) ../src/Reptil.cpp -c

clear:
	rm *.o
