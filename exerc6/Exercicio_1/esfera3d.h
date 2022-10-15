#ifndef ESFERA3D_H
#define ESFERA3D_H
#include <string>
#include "forma3d.h"

class Esfera3d:public Forma3d{
    private:
    std::string nome;
    std::string cor;
    double raio;
    double volume;
    public:
    Esfera3d(std::string nome, std::string cor, double raio);
    virtual double get_volume() override;
    virtual std::string get_cor() override;
    virtual std::string get_nome() override;
};

#endif