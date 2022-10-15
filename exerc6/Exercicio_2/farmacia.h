#ifndef FARMACIA_H
#define FARMACIA_H
#include <string>

class Farmacia
{
private:
    std::string codigo;
    std::string descricao;
    double precodecompra;
    double porcentagem_lucro;

public:
    Farmacia(std::string codigo,std::string descricao,double precocompra,double percentual);
    virtual double gerarPrecoDeVenda()=0;
    std::string getcodigo();
    std:: string getdescricao();
    double getprecodecompra();
    double getpercentuallucro();
  
    
};

#endif