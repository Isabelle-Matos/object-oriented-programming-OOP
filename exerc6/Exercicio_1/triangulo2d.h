#ifndef TRIANGULO2D_H
#define TRIANGULO2D_H
#include <string>
#include "forma2d.h"

class Triangulo2d:public Forma2d{
    private:
    std::string nome;
    std::string cor;
    double lado;
    double altura;
    double area;
    double perimetro;
    public:
    Triangulo2d(std::string nome, std::string cor, double altura, double lado);
    virtual double get_area() override;
    virtual double get_perimetro() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif