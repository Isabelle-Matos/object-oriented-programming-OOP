all: make
	./Executar

make: main.o arquivoip.o exception.o  
	g++ main.o arquivoip.o exception.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

arquivoip.o: arquivoip.cpp arquivoip.h
	g++ -c arquivoip.cpp

exception.o: exception.cpp exception.h
	g++ -c exception.cpp

clean:
	rm -rf *o make