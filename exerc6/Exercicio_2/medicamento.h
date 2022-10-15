#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H
#include "farmacia.h"
class Medicamento:public Farmacia{
    private:
    double desconto;
    public:
    virtual double gerarPrecoDeVenda() override;
    Medicamento(std::string codigo,std::string descricao,double precodecompra,double percentual, double desconto);
    double getdesconto();
};
#endif