#include "cubo3d.h"

Cubo3d::Cubo3d(std::string nome, std::string cor, double lado):
    nome(nome), cor(cor), volume(lado*lado*lado) {}

std::string Cubo3d::get_nome(){
    return nome;
}
std::string Cubo3d::get_cor(){
    return cor;
}
double Cubo3d::get_volume(){
    return volume;
}