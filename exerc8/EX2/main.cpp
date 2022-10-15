#include "funcionarios.h"
#include <iostream>


int main(){

    try{
        Funcionarios func;
        func.leitura();
       
    }
    catch(const char *e){
        std::cout <<"erro! "<< e << std::endl;
    }
    return 0;
}