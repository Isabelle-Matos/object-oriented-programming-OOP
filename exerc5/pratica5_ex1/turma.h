#ifndef TURMA_H
#define TURMA_H
#include<string>

class Turma{
private:
    std::string _nome;
    int _ano;
public:
    Turma(std::string nome, int ano);
    void setnome(std::string nome);
    void setano(int ano);
    std::string getnome();
    int getano();
};
#endif