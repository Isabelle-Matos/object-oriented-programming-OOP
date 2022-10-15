#include "Overnightpackage.h"

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, int peso, int custo, double taxanoturna):
Package(nome, endereco, peso, custo), _taxanoturna(taxanoturna){}

double OvernightPackage::calculateCost(){
    int Custo = getpeso()*getcusto();
    double custoreal = (double)Custo;
    return custoreal+ _taxanoturna;
}
