#include "circulo2d.h"

Circulo2d::Circulo2d(std::string nome, std::string cor, double raio):
    nome(nome), cor(cor), area((raio*raio)*3.14), perimetro(2.0*3.14*raio){}

double Circulo2d::get_area(){
    return area;
}
double Circulo2d::get_perimetro(){
    return perimetro;
}
std::string Circulo2d::get_nome(){
    return nome;
}
std::string Circulo2d::get_cor(){
    return cor;
}