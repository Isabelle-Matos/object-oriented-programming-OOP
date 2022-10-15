#include "medicamento.h"

Medicamento::Medicamento(std::string codigo,std::string descricao,double precodecompra,double percentual, double desconto):
    Farmacia(codigo,descricao,precodecompra,percentual), desconto(desconto) {}

double Medicamento::gerarPrecoDeVenda(){
    return (getprecodecompra() + getpercentuallucro()) - desconto;
}

double Medicamento::getdesconto(){
    return desconto;
}