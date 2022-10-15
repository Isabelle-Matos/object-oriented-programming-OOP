#include "alunos.h"

Alunos:: Alunos(int matricula, std::string &nome, double nota1,  double nota2):
 matricula(matricula), nome(nome), nota1(nota1), nota2(nota2), media((nota1+nota2)/2.0) {}

int Alunos::getmatricula(){
    return this->matricula;
}

std::string Alunos::getnome(){
    return this->nome;
}

double Alunos::getmedia(){
    return this->media;
}
