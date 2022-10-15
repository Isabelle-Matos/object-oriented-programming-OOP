#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include "package.h"

class OvernightPackage: public Package{
private:
    double _taxanoturna;
public:
    OvernightPackage(std::string nome, std::string endereco, int peso, int custo, double taxanoturna);
    virtual double calculateCost() override;
};
#endif