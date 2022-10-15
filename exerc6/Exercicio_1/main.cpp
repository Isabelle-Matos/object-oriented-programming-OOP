#include <iostream>
#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "quadrado2d.h"
#include "circulo2d.h"
#include "triangulo2d.h"
#include "triangulo2d.h"
#include "esfera3d.h"
#include "cubo3d.h"
using namespace std;

int main(){
    Quadrado2d *q2 = new Quadrado2d ("Quadrado", "Vermelho", 20);
    Triangulo2d *t2 = new Triangulo2d("Triangulo", "Rosa", 18, 13);
    Circulo2d *c2 = new Circulo2d("Circulo", "Azul", 5);

    cout<<"------- QUADRADO --------"<<endl;
    cout<<q2->get_cor()<<endl;
    cout<<q2->get_nome()<<endl;
    cout<<q2->get_area()<<endl;
    cout<<q2->get_perimetro()<<endl;

    cout<<"------- TRIANGULO --------"<<endl;
    cout<<t2->get_cor()<<endl;
    cout<<t2->get_nome()<<endl;
    cout<<t2->get_area()<<endl;
    cout<<t2->get_perimetro()<<endl;

    cout<<"------- CIRCULO --------"<<endl;
    cout<<c2->get_cor()<<endl;
    cout<<c2->get_nome()<<endl;
    cout<<c2->get_area()<<endl;
    cout<<c2->get_perimetro()<<endl;

    cout<<"------- CUBO --------"<<endl;
    Cubo3d *c3 = new Cubo3d("Cubo", "Preto", 33);
    cout<<c3->get_cor()<<endl;
    cout<<c3->get_nome()<<endl;
    cout<<c3->get_volume()<<endl;

    delete q2;
    delete t2;
    delete c2;
    delete c3;

    return 0;
}