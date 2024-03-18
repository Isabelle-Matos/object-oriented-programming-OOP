all: make
	./Executar

make: main.o circulo2d.o cubo3d.o esfera3d.o quadrado2d.o triangulo2d.o 
	g++ main.o circulo2d.o cubo3d.o esfera3d.o quadrado2d.o triangulo2d.o -o Executar
	
main.o: main.cpp
	g++ -c main.cpp

circulo2d.o: circulo2d.cpp circulo2d.h
	g++ -c circulo2d.cpp

cubo3d.o: cubo3d.cpp cubo3d.h
	g++ -c cubo3d.cpp

esfera3d.o: esfera3d.cpp esfera3d.h
	g++ -c esfera3d.cpp

quadrado2d.o: quadrado2d.cpp quadrado2d.h
	g++ -c quadrado2d.cpp

triangulo2d.o: triangulo2d.cpp triangulo2d.h
	g++ -c triangulo2d.cpp

clean:
	rm -rf *o make