#include <iostream>
#include "palavraschave.h"
int main(){
    
    try{
        KeyWords palavra;
        palavra.leitura();
     }
     catch(const char *e){
         std::cout << "erro: " << e <<std::endl;
     }

     return 0;
}