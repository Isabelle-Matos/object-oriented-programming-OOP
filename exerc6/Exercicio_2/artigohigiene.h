#ifndef ARTIGOHIGIENE_H
#define ARTIGOHIGIENE_H
#include "farmacia.h"

class ArtigoHigiene:public Farmacia{
    public:
    virtual double gerarPrecoDeVenda() override;
     ArtigoHigiene(std::string codigo,std::string descricao,double precodecompra,double percentual);
  
};

#endif