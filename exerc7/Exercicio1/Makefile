all: make
	./Executar

make: main.o excecaosoma.o exception.o  
	g++ main.o excecaosoma.o exception.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

excecaosoma.o: excecaosoma.cpp excecaosoma.h
	g++ -c excecaosoma.cpp

exception.o: exception.cpp exception.h
	g++ -c exception.cpp

clean:
	rm -rf *o make