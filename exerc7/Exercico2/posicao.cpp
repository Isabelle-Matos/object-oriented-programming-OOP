#include "posicao.h"
#include <iostream>
#include <cctype>

PosicoesVetor::PosicoesVetor(int _y){
    y = _y;
    elementos = new int [y];
}
void PosicoesVetor::Posicoes(){
    
    std::cout<<"Informe a posicao e o elemento do vetor:"<<std::endl;
    int i;
    int elemento;
    for(int j=0; j<y; j++){

        std::cin >> i >> elemento;
        

        if(i <0 || i>y){
            throw "Posicao invalida.";
        }
       
        else if(std::cin.fail()){
            throw "Elemento nao e um numero.";
        }
        elementos[i] = elemento;
      
    }
    for(int i=0; i<y; i++){
            std::cout << elementos[i] <<std::endl;
    }
}

PosicoesVetor::~PosicoesVetor(){
    delete[] elementos;
}