CC=g++
obj = animal.o anfibio.o ave.o mamifero.o funcionario.o

all: $(obj)

animal.o: ../include/Animal.hpp ../src/Animal.cpp
	$(CC) ../src/Animal.cpp -c

funcionario.o: ../include/Funcionario.hpp ../src/Funcionario.cpp
	$(CC) ../src/Funcionario.cpp -c


anfibio.o: ../include/Anfibio.hpp ../src/Anfibio.cpp
	$(CC) ../src/Anfibio.cpp -c

ave.o: ../include/Ave.hpp ../src/Ave.cpp
	$(CC) ../src/Ave.cpp -c

mamifero.o: ../include/Mamifero.hpp ../src/Mamifero.cpp
	$(CC) ../src/Mamifero.cpp -c


clear:
	rm *.o
