#include "palavraschave.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include<map>
#include <bits/stdc++.h>

void KeyWords::leitura(){
    std::ifstream fin;
    std::string palavra;
    int cont = 0;
    fin.open("palavras.txt");

 if(!fin.is_open()){
     throw "Nao foi possivel realizar a abertura/leitura do arquivo.";
 }
    while(!fin.eof()){
        std::getline(fin, palavra);
        std::cout << palavra <<std::endl;
    }
    std::stringstream s(palavra);
    std::map<std::string, int> p;
   
    while(s>>palavra){
        p[palavra]++;
      
    }
    
    std::map<std::string, int>::iterator m;
     std::cout<<"Palavras-chave: ";

    for (m = p.begin(); m != p.end(); m++){
        if(m->second >=2){ 
            std::cout<< m->first <<" ";
              cont++;
        }
        if(cont==3){
            break;
        }     
  
    }
    std::cout << std::endl;
}
