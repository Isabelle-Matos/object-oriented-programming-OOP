#include <iostream>
#include "data.h"
using namespace std;

int main()
{
	Data data = {25,5,1999};
	Data *D = &data;
	D->data_barras();
	D->data_extenso();
	cout << D->getDataEmSegundo(25,5,1999)<<endl;
	delete D;

	return 0;
	
}
