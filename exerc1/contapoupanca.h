#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "conta.h"
#include <string>
class ContaPoupanca : public Conta{
    private:
    double _rendimento;

    public:
    ContaPoupanca(std::string nome, std::string cpf, double saldo, double rendimento);
    void muda_rendimento(double rendimento);
    double getrendimento();
    virtual double getsaldo() override;
};
#endif