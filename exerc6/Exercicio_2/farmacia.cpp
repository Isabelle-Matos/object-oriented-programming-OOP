#include "farmacia.h"
Farmacia::Farmacia(std::string codigo,std::string descricao,double precocompra,double percentual):
    codigo(codigo),descricao(descricao),precodecompra(precodecompra), porcentagem_lucro(percentual) {}

std::string Farmacia::getcodigo(){
    return codigo;
}
double Farmacia::getpercentuallucro(){
    return porcentagem_lucro;
}

double Farmacia::getprecodecompra(){
    return precodecompra;
}

std::string Farmacia::getdescricao(){
    return descricao;
}