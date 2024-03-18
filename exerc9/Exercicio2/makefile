all: make
	./Executar

make: main.o mdc.o 
	g++ main.o mdc.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

mdc.o: mdc.cpp mdc.h
	g++ -c mdc.cpp

clean:
	rm -rf *o make