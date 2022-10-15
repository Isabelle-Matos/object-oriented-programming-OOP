#include "contapoupanca.h"

ContaPoupanca::ContaPoupanca(std::string nome, std::string cpf, double saldo, double rendimento):
Conta(nome, cpf, saldo), _rendimento(rendimento){}

double ContaPoupanca::getrendimento(){
    return this->_rendimento;
}
void ContaPoupanca::muda_rendimento(double rendimento){
    _rendimento = rendimento;
}
double ContaPoupanca::getsaldo(){
    return getsaldo() + _rendimento;
}