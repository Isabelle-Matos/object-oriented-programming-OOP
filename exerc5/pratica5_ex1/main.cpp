#include <iostream>
#include "estudante.h"
#include "pessoa.h"
#include "turma.h"

int main(){
    Pessoa pessoa ("Isabelle");
    Turma _turma("Programacao II", 2021);
    Estudante estudante("Julie", 95388, _turma);
    std::cout<<"A pessoa e: "<< pessoa.get_nome()<<std::endl;
    std::cout<<"O estudante e: "<<estudante.get_nome()<< std::endl;
    std::cout<<"O estudante esta matriculado na disciplina "<< _turma.getnome() << ", do ano " << _turma.getano() << std::endl;

    return 0;
}