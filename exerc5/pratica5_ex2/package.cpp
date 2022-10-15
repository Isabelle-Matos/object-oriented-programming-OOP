#include "package.h"
Package::Package(std::string nome, std::string endereco, int peso, int custo):
_nome(nome), _endereco(endereco), _peso(peso), _custo(custo){}

std::string Package::getnome() const{
        return this->_nome;
    }
std::string Package::getendereco() const{
        return this->_endereco;
    }
unsigned int Package::getpeso(){
        return this->_peso;
    }
unsigned int Package::getcusto(){
        return this->_custo;
    }
double Package::calculateCost(){
    return _custo*_peso;
}
