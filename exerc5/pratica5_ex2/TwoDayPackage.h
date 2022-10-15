#ifndef TWODAY_H
#define TWODAY_H
#include"package.h"
class TwoDayPackage: public Package {
private:
    double _taxadoisdias;
public:
    TwoDayPackage(std::string nome, std::string endereco, int peso, int custo, double taxadoisdias);
    virtual double calculateCost() override;

};
#endif