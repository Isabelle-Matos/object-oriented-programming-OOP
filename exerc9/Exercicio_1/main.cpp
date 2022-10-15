#include <iostream>
#include "soma.h"

using std::cin;
using std::cout;
using std::endl;


int main(){
    int m, n;

    cout << "Este programa realiza o somatorio entre dois numeros M e N.\n\n";
    cout << "Digite M: ";
    cin >> m;
    cout << "\nDigite N: ";
    cin >> n;
    
    soma *sum = new soma(n, m);
    cout << "\nValor do somatório de " << m << " até " << n << ": " << sum->somatorio() << endl;

    delete sum;
    return 0;
}