all: make

make: power.o
	g++ power.o main.cpp

power.o: power.cpp
	g++ -c power.cpp

clean:
	rm -rf *o make