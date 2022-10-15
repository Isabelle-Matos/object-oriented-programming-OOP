#include <iostream>
#include "mdc.h"

using std::cin;
using std::cout;
using std::endl;


int main(){
    int x, y;

    cout << "Este programa calcula o MDC entre X e Y de forma recursiva\n\n";
    cout << "Digite X: ";
    cin >> x;
    cout << "\nDigite Y: ";
    cin >> y;
    
    mdc *maxdiv = new mdc(x, y);
    cout << "\nValor do mdc entre " << x << " e " << y << ": " << maxdiv->MDC(x, y) << endl;

    delete maxdiv;
    return 0;
}