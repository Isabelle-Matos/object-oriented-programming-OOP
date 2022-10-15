#ifndef CUBO3D_H
#define CUBO3D_H
#include <string>
#include "forma3d.h"

class Cubo3d:public Forma3d{
    private:
    std::string nome;
    std::string cor;
    double volume;
    double lado;
    public:
    Cubo3d(std::string nome, std::string cor, double lado);
    virtual double get_volume() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif