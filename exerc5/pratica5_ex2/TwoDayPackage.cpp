#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, int peso, int custo, double taxadoisdias):
    Package(nome, endereco, peso, custo), _taxadoisdias(taxadoisdias){}

double TwoDayPackage::calculateCost(){
    int Custo = getpeso()*getcusto();
    double custoreal = (double)Custo;
    return custoreal + _taxadoisdias;
};