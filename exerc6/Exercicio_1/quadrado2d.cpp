#include "quadrado2d.h"

Quadrado2d::Quadrado2d(std::string nome, std::string cor, double lado):
    nome(nome), cor(cor), area(lado*lado), perimetro(lado*4.0) {}

std::string Quadrado2d::get_nome(){
    return nome;
}
std::string Quadrado2d::get_cor(){
    return cor;
}
double Quadrado2d::get_area(){
    return area;
}
double Quadrado2d::get_perimetro(){
    return perimetro;
}
