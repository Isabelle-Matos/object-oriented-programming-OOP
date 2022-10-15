#ifndef ALUNOS_H
#define ALUNOS_H
#include <string>

class Alunos{
private:
    std::string nome;
    int matricula;
    double nota1;
    double nota2;
    double media;
    
public:
    Alunos(int matricula, std::string &nome, double nota1,  double nota2);
    int getmatricula();
    std::string getnome();
    double getmedia();
  
};
#endif