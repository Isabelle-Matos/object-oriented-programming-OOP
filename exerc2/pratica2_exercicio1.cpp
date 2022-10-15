#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//Simulador de par ou ímpar
void preencheAleatorios(int a[], int b[], int n)
{
	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
		a[i] = rand()%9;
	}
	for(int i=0; i<n; i++)
	{
		b[i] = rand()%9;
	}
	
}
void imprime(int a[], int b[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout <<a[i] <<" ";
	}
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout <<b[i] <<" ";
	}
	cout << endl;
}
void contaParImpar(int a[], int b[], int n, int &par, int &impar)
{
	for(int i=0; i<n; i++)
	{
		if((a[i] + b[i])%2==0)
		{
			par++;
		}
		else if((a[i] +b[i])%2!=0)
		{
			impar++; 
		}
	
	}
	cout <<"Par: " << par << endl;
	cout <<"Impar: "<< impar << endl;
	
}
int main()
{
	int n;

	
	do
	{
		int par=0, impar=0;
		cout << "Digite o valor de n:"<<endl;
		cin >> n;
		int *a= new int[n];
		int *b= new int[n];
		preencheAleatorios(a, b, n);
		imprime(a, b, n);
		contaParImpar(a, b, n, par, impar);

		delete[]a;
		delete[]b;
			
	
	}while(n>0);
	
	return 0;

}
