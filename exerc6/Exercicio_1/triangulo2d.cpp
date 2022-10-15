#include "triangulo2d.h"

Triangulo2d::Triangulo2d(std::string nome, std::string cor, double altura,double lado):
    nome(nome), cor(cor), area((lado*altura)/2.0), perimetro(lado*3.0) {}

std::string Triangulo2d::get_nome(){
    return nome;
}
std::string Triangulo2d::get_cor(){
    return cor;
}
double Triangulo2d::get_area(){
    return area;
}
double Triangulo2d::get_perimetro(){
    return perimetro;
}
