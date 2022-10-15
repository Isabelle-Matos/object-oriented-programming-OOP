#ifndef CONTA_H
#define CONTA_H
#include<string>
class Conta{
    private:
    std::string nome;
    std::string cpf;
    double saldo;

    public:
    Conta(std::string nome, std::string cpf, double saldo);
    void setsaldo(double _saldo);
    virtual double getsaldo();
};

#endif