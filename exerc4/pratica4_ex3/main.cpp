#include <iostream>
#include "aquecedordois.h"
using namespace std;

int main(){

        Aquecedor aquecedor = Aquecedor();
        Aquecedor aquecedor2 = Aquecedor(25.5);
        Aquecedor aquecedor3 = Aquecedor(25.5,15.0);

        aquecedor.diminuirtemp();
        aquecedor2.diminuirtemp();
        aquecedor3.diminuirtemp();

        cout << aquecedor.getAquecedor() <<endl;
        cout << aquecedor2.getAquecedor() <<endl;
        cout << aquecedor3.getAquecedor() <<endl;

        aquecedor.aumentartemp();
        aquecedor2.aumentartemp();
        aquecedor3.aumentartemp();

        cout << aquecedor.getAquecedor() << endl;
        cout << aquecedor2.getAquecedor() << endl;
        cout << aquecedor3.getAquecedor() << endl;
        return 0;
}



	
	
