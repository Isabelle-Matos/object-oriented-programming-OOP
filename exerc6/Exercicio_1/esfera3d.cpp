#include "esfera3d.h"

Esfera3d::Esfera3d(std::string nome, std::string cor, double raio):
    nome(nome), cor(cor), volume((4.0/3.0)*3.14*(raio*raio*raio)) {}

std::string Esfera3d::get_nome(){
    return nome;
}
std::string Esfera3d::get_cor(){
    return cor;
}
double Esfera3d::get_volume(){
    return volume;
}