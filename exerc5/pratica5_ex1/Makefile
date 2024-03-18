all: make
	./Executar

make: main.o estudante.o pessoa.o turma.o 
	g++ main.o estudante.o pessoa.o turma.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

estudante.o: estudante.cpp estudante.h
	g++ -c estudante.cpp

pessoa.o: pessoa.cpp pessoa.h
	g++ -c pessoa.cpp

turma.o: turma.cpp turma.h
	g++ -c turma.cpp

clean:
	rm -rf *o make