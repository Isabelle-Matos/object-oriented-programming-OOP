#include <iostream>
#include "power.h"

using std::cin;
using std::cout;
using std::endl;


int main(){
    int k, n;

    cout << "Este programa eleva um número K a N de forma recursiva\n\n";
    cout << "Digite K: ";
    cin >> k;
    cout << "\nDigite N: ";
    cin >> n;
    
    power *pow = new power(k, n);
    cout << "\nValor de " << k << " elevado a " << n << ": " << pow->expoente() << endl;

    delete pow;
    return 0;
}