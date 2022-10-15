#include "farmacia.h"
#include "medicamento.h"
#include "artigohigiene.h"

#include<iostream>
using namespace std;

int main(){

    Medicamento *med1 = new Medicamento("12345678","Medicamento para colica",25.0,8.0,2.0);
    Medicamento *med2 = new Medicamento("12345679","Medicamento para dor de cabeca",15.0,4.0,1.5);

    ArtigoHigiene *art1 = new ArtigoHigiene("87654321","Sabonete",3.0,1.0);
    ArtigoHigiene *art2 = new ArtigoHigiene("97654321","Creme para cabelo",18.9,3.0);

    cout<<"----------REMEDIOS---------"<<endl;
    cout<<"CODIGO: "<<med1->getcodigo()<<endl;
    cout<<"DESCRICAO: "<<med1->getdescricao()<<endl;
    cout<<"PRECO DE COMPRA: "<<med1->getprecodecompra()<<endl;
    cout<<"PERCENTUAL DE LUCRO: "<<med1->getpercentuallucro()<<endl;
    cout<<"VALOR DO DESCONTO: "<<med1->getdesconto()<<endl;
    cout<<"PRECO DE VENDA: "<<med1->gerarPrecoDeVenda()<<endl;
    cout<< endl;
    cout<<"CODIGO: "<<med2->getcodigo()<<endl ;
    cout<<"DESCRICAO: "<<med2->getdescricao()<<endl;
    cout<<"PRECO DE COMPRA: "<<med2->getprecodecompra()<<endl;
    cout<<"PERCENTUAL DE LUCRO: "<<med2->getpercentuallucro()<<endl;
    cout<<"VALOR DO DESCONTO: "<<med2->getdesconto()<<endl;
    cout<<"PRECO DE VENDA: "<<med2->gerarPrecoDeVenda()<< endl;
    cout<<endl;

    cout<<"--------ARTIGO HIGIENE---------"<<endl;
    cout<<"CODIGO: "<<art1->getcodigo()<<endl;
    cout<<"DESCRICAO: "<<art1->getdescricao()<<endl;
    cout<<"PRECO DE COMPRA: "<<art1->getprecodecompra()<<endl;
    cout<<"PERCENTUAL DE LUCRO: "<<art1->getpercentuallucro()<<endl;
    cout<<"PRECO DE VENDA: "<<art1->gerarPrecoDeVenda()<<endl;
    cout<<endl;
    cout<<"CODIGO: "<<art2->getcodigo()<<endl ;
    cout<<"DESCRICAO: "<<art2->getdescricao()<<endl;
    cout<<"PRECO DE COMPRA: "<<art2->getprecodecompra()<<endl;
    cout<<"PERCENTUAL DE LUCRO: "<<art2->getpercentuallucro()<<endl;
    cout<<"PRECO DE VENDA: "<<art2 ->gerarPrecoDeVenda()<<endl;
    cout<<endl;


    delete med1;
    delete med2;
    delete art1;
    delete art2;

    
    return 0;
}