#include "funcionarios.h"
#include <iostream>
#include <fstream>
#include <string>

Funcionarios::Funcionarios(){
    gasto_total = 0;
    gasto_medio = 0;
}
void Funcionarios::leitura(){
    std::string nome, discart;
    int line =0;
    double valor;
    std::ifstream fin;
    fin.open("funcionarios.txt");
  

    if(!fin.is_open()){
        throw "Impossivel realizar a abertura/leitura do arquivo.";
    }

    while(!fin.eof()){
       
        std::getline(fin, nome, 'R');
        std::getline(fin, discart, '$');

        fin>>valor;

        std::cout << nome <<" "<< discart << "R$"<< valor;
    
        gasto_total+= valor;
        line++;
    
    }
    gasto_medio = gasto_total/line;

    porc_gasto = new double[line];

 
 
    
    fin.close();

}

