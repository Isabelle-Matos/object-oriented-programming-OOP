#include "excecaosoma.h"
#include "exception.h"
#include "iostream"

ExcecaoSoma::ExcecaoSoma(int _x, int _n){
    if(_x>100){
        throw "Numero invalido. Valor nao permitido (x>100).";
    }
    else{
    x = _x;
    n = _n;
    elementos = new int [n];
    }
}
void ExcecaoSoma::IncluirValores(){
    int cont = 0;

    for(int i=0; i<n; i++){
        std::cin >> elementos[i];
        if(std::cin.fail()){
            throw "Valor informado nao e um numero.";
        }
        else if(elementos[i] <= 0){
            throw "Numero nao permitido. Valor igual ou abaixo de 0.";
        }
       
    }
    int soma = 0, somaf = 0;

    for(int i=0; i<n; i++){
            soma+= elementos[i];
    
            if(soma <x){
                somaf = soma;
                cont++;        
            }
         }         
                std::cout <<"Soma: "<< somaf << std::endl;
                std::cout <<"Media: " <<somaf/cont << std::endl;
                std::cout <<"Quantidade de numeros: " <<cont << std::endl;
                std::cout<<std::endl;      
        
        if(soma >=x){
            throw ExcecaoAcimaDeX();
        }
      
 
}
ExcecaoSoma::~ExcecaoSoma(){
    delete[] elementos;
}

