#include "turma.h"

Turma::Turma(std::string nome, int ano):
_nome(nome), _ano(ano){}

void Turma::setnome(std::string nome){
    _nome = nome;
}
void Turma::setano(int ano){
    _ano = ano;
}
std::string Turma::getnome(){
    return this->_nome;
}
int Turma::getano(){
    return this->_ano;
}