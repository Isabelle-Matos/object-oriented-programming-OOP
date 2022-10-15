#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "conta.h"

class ContaCorrente: public Conta{
    public:
    ContaCorrente(std::string nome, std::string cpf, double saldo);
    virtual double getsaldo() override;
};

#endif