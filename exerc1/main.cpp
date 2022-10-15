#include<iostream>
#include "conta.h"
#include "contacorrente.h"
#include "contapoupanca.h"

int main(){
    Conta *c1= new Conta("isabelle", "123445", 250.00);
    ContaCorrente *c2= new ContaCorrente("isabelle", "123445", 250.00);
    ContaPoupanca *c3= new ContaPoupanca("isabelle", "123445", 250.00, 120.00);

   std::cout << c1->getsaldo() << std::endl;
   std::cout << c2->getsaldo() <<std::endl;
   std::cout<< c3->getsaldo() << std::endl;

   delete c1;
   delete c2;
   delete c3;

   return 0;
   
}