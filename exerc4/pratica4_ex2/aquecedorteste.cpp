#include <iostream>
#include "aquecedor.h"
using namespace std;
Aquecedor::Aquecedor(){
	this->temperatura = 20;
}
void Aquecedor::setAquecedor(float Temperatura){
	temperatura = Temperatura;
}
void Aquecedor::aumentartemp(){
	this->setAquecedor(this->getAquecedor()+5);
}
void Aquecedor::diminuirtemp(){
	this->setAquecedor(this->getAquecedor()-5);
}
float Aquecedor::getAquecedor(){
	return this->temperatura;
}
