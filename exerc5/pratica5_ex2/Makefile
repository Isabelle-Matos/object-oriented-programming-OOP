all: make
	./Executar

make: main.o Overnightpackage.o TwoDayPackage.o package.o 
	g++ main.o Overnightpackage.o TwoDayPackage.o package.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

Overnightpackage.o: Overnightpackage.cpp Overnightpackage.h
	g++ -c Overnightpackage.cpp

TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp

package.o: package.cpp package.h
	g++ -c package.cpp

clean:
	rm -rf *o make