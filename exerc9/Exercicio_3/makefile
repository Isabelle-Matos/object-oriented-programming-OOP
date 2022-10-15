all: make

make: mdc.o
	g++ mdc.o main.cpp

mdc.o: mdc.cpp
	g++ -c mdc.cpp

clean:
	rm -rf *o make