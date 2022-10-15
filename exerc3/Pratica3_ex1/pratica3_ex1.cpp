#include <iostream>
#include "ListaVetoresInteiros.h"
using namespace std;
ListaVetorInteiros::ListaVetorInteiros()
{
    _elementos = new int[TAMANHO]();
    _num_elementos_inseridos = 0;
}
void ListaVetorInteiros::inserir_lista(int elemento)
{
	if(_num_elementos_inseridos == TAMANHO)
	{
		cout <<"Erro, lista cheia!"<<endl;
		exit(1);
	}
	_elementos[_num_elementos_inseridos] = elemento;
	_num_elementos_inseridos++;
}
void ListaVetorInteiros::remover_primeiro()
{
	int *novo = new int[TAMANHO];
	for(int i=0; i<_num_elementos_inseridos-1; i++)
	{
		novo[i] = _elementos[i+1];
	}
	delete [] _elementos;
	_elementos=novo;
	_num_elementos_inseridos--;
	
}
void ListaVetorInteiros::remover_ultimo()
{
	int *novo = new int[TAMANHO];
	for(int i=0; i<_num_elementos_inseridos-1; i++)
	{
		novo[i] = _elementos[i];
	}
	delete[] _elementos;
	_elementos = novo;
	_num_elementos_inseridos--;
}
void ListaVetorInteiros::inverte()
{
	int *novo = new int[TAMANHO];
	int tam = sizeof(_elementos)/sizeof(int);
    	for(int i=0; i<tam; i++)
    {
	   novo[i] = _elementos[tam-1-i];
    }
	delete[]_elementos;
	_elementos = novo;


}
void ListaVetorInteiros::imprimir()
{
    for(int i=0; i<_num_elementos_inseridos; i++)
    {
        cout << _elementos[i]<< " ";
        cout << endl;
    }
}
ListaVetorInteiros::~ListaVetorInteiros()
{
    delete[] _elementos;
}
