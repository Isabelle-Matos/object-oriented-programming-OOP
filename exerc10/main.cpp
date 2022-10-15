#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include<algorithm>
#include "alunos.h"

bool maior( Alunos &a,  Alunos &b){

       return a.getmedia() > b.getmedia() ? a.getmedia() : b.getmedia();

}

int main(){

    int matricula = 0;
    std::string nome;
    double nota1,nota2;
  

    std::vector<Alunos> alunos;

    while (true)
    {
        std::cin>> matricula ;

        if(matricula == -1){break;}
        else{
            std::cin>> nome >> nota1 >>nota2;
            alunos.push_back(Alunos(matricula,nome,nota1,nota2));
        }

        
    }
    
    sort(alunos.begin(),alunos.end(),maior);

    for(int i = 0; i<alunos.size(); i++){

        std::bitset<4> bit(alunos[i].getmatricula());

        std::cout<< bit.flip() << " - " << alunos[i].getnome() << " - " << alunos[i].getmedia()<< std::endl;
    }


    return 0;
}