#include "iostream"
#include "posicao.h"

int main(){
 

    try{
        PosicoesVetor *vet = new PosicoesVetor(5);
        vet->Posicoes();
        delete vet;
    }
    catch(const char *e){
        std::cout << "erro: " << e <<std::endl;
    }

   
    return 0;
}