all: make
	./Executar

make: main.o posicao.o 
	g++ main.o posicao.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

posicao.o: posicao.cpp posicao.h
	g++ -c posicao.cpp

clean:
	rm -rf *o make