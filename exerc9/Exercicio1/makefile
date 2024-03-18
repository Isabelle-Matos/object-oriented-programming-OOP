all: make
	./Executar

make: main.o power.o 
	g++ main.o power.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

power.o: power.cpp power.h
	g++ -c power.cpp

clean:
	rm -rf *o make