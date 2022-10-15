#ifndef QUADRADO2D_H
#define QUADRADO2D_H
#include <string>
#include "forma2d.h"

class Quadrado2d:public Forma2d{
    private:
    std::string nome;
    std::string cor;
    double lado;
    double area;
    double perimetro;
    public:
    Quadrado2d(std::string nome, std::string cor, double lado);
    virtual double get_area() override;
    virtual double get_perimetro() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif