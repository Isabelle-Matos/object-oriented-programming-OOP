all: make
	./Executar

make: main.o palavraschave.o 
	g++ main.o palavraschave.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

palavraschave.o: palavraschave.cpp palavraschave.h
	g++ -c palavraschave.cpp

clean:
	rm -rf *o make