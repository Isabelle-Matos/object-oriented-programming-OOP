#include <iostream>
#include "ListaVetoresInteiros.h"
using namespace std;
int main()
{
    ListaVetorInteiros L1;
    ListaVetorInteiros *lista = &L1;
    lista->inserir_lista(1);
    lista->inserir_lista(2);
    lista->inserir_lista(3);
    lista->inserir_lista(4);
    lista->inserir_lista(5);

    lista->remover_primeiro();
    lista->remover_ultimo();
    lista->imprimir();
    lista->inverte();
    lista->imprimir();
    delete lista;
    return 0;
}
