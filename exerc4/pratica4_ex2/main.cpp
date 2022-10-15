#include <iostream>
#include <iomanip>
#include "aquecedor.h"
using namespace std;

int main(){

	Aquecedor aquecedor = Aquecedor();
	aquecedor.aumentartemp();
	aquecedor.diminuirtemp();
	cout <<fixed << setprecision(2) << aquecedor.getAquecedor()<<endl;

	return 0;
}
