all: make
	./Executar

make: main.o artigohigiene.o farmacia.o medicamento.o 
	g++ main.o artigohigiene.o farmacia.o medicamento.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

artigohigiene.o: artigohigiene.cpp artigohigiene.h
	g++ -c artigohigiene.cpp

farmacia.o: farmacia.cpp farmacia.h
	g++ -c farmacia.cpp

medicamento.o: medicamento.cpp medicamento.h
	g++ -c medicamento.cpp

clean:
	rm -rf *o make