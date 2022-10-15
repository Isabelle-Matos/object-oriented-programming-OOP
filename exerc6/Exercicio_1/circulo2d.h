#ifndef CIRCULO2D_H
#define CIRCULO2D_H
#include <string>
#include"forma2d.h"
class Circulo2d:public Forma2d{
    private:
    std::string nome;
    std::string cor;
    double area;
    double raio;
    double perimetro;
    public:
    Circulo2d(std::string nome, std::string cor, double raio);
    virtual double get_area() override;
    virtual double get_perimetro() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif