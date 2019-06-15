CC=g++
obj = animal.o funcionario.o tratador.o veterinario.o anfibio.o ave.o mamifero.o reptil.o anfibionativo.o avenativo.o mamiferonativo.o reptilnativo.o anfibioexotico.o mamiferoexotico.o aveexotico.o

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

anfibionativo.o: ../include/AnfibioNativo.hpp ../src/AnfibioNativo.cpp
	$(CC) ../src/AnfibioNativo.cpp -c

anfibioexotico.o: ../include/AnfibioExotico.hpp ../src/AnfibioExotico.cpp
	$(CC) ../src/AnfibioExotico.cpp -c

avenativo.o: ../include/AveNativo.hpp ../src/AveNativo.cpp
	$(CC) ../src/AveNativo.cpp -c

aveexotico.o: ../include/AveExotico.hpp ../src/AveExotico.cpp
	$(CC) ../src/AveExotico.cpp -c

mamiferonativo.o: ../include/MamiferoNativo.hpp ../src/MamiferoNativo.cpp
	$(CC) ../src/MamiferoNativo.cpp -c

mamiferoexotico.o: ../include/MamiferoExotico.hpp ../src/MamiferoExotico.cpp
	$(CC) ../src/MamiferoExotico.cpp -c

reptilnativo.o: ../include/ReptilNativo.hpp ../src/ReptilNativo.cpp
	$(CC) ../src/ReptilNativo.cpp -c

reptilexotico.o: ../include/ReptilExotico.hpp ../src/ReptilExotico.cpp
	$(CC) ../src/ReptilExotico.cpp -c

clear:
	rm *.o


