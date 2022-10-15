#include <iostream>
#include "aquecedordois.h"
using namespace std;
Aquecedor::Aquecedor(){
	this->temperaturaminima = 10;
	this->temperaturamaxima = 40;
	this->fatorincremento = 5;
}
Aquecedor::Aquecedor(float Temperatura){
	this->temperaturaminima = Temperatura;
	this->temperaturamaxima = 40;
	this->fatorincremento = 5;
}
Aquecedor::Aquecedor(float Temperatura, float incremento){
	this->temperaturaminima = Temperatura;
	this->temperaturamaxima = 40;
	this->fatorincremento = incremento;
}
void Aquecedor::setIncremento(float incremento){
        fatorincremento=incremento;
}
float Aquecedor::getIncremento(){
        return this->fatorincremento;
}
void Aquecedor::setAquecedor(float Temperatura){
	 if(Temperatura < 0.0 || Temperatura > temperaturamaxima){
                cout <<"Temperatura fora dos limites."<<endl;
                exit(1);
        }
        else{
                temperaturaminima = Temperatura;
        }
        
}
float Aquecedor::getAquecedor(){
        return this->temperaturaminima;
}
void Aquecedor::aumentartemp(){
      this->setAquecedor(this->getAquecedor()+this->getIncremento());
}
void Aquecedor::diminuirtemp(){
        this->setAquecedor(this->getAquecedor()-this->getIncremento());
}
