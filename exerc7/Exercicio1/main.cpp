#include "excecaosoma.h"
#include "exception.h"
#include "iostream"

int main(){
    
    try{
      ExcecaoSoma *soma = new ExcecaoSoma(20, 5);
      soma->IncluirValores();
      delete soma;
    }
    catch (const char* e){
        std::cout<<"erro: "<< e << std::endl;
    }
    catch (ExcecaoAcimaDeX &e){
        std::cout <<"erro: " << e.what() << std::endl;
    }

    
    

    return 0;
}