#include <iostream>
#include <fstream>
#include "arquivoip.h"


int main(){
    
    try{
        ArquivoIP ip;
        ip.InserindoArquivo();
        ip.EnderecoValido();
        ip.EnderecoInvalido();
       
    }
    catch(std::exception &e){
        std::cout <<"erro! "<<e.what() <<std::endl;
    }
    
   
 
   
   
  

    return 0;
}