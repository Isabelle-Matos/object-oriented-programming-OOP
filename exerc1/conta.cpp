#include<iostream>
#include "conta.h"

Conta::Conta(std::string nome, std::string cpf, double saldo):
nome(nome), cpf(cpf), saldo(saldo){}

void Conta::setsaldo(double _saldo){
    saldo = _saldo;
}
double Conta::getsaldo(){
    return this->saldo;
}