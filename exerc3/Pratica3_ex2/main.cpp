#include <iostream>
#include "data.h"
using namespace std;

int main()
{
	
	Data *D = new Data{25,5,1999};
	D->data_barras();
	D->data_extenso();
	cout << D->getDataEmSegundo(25,5,1999)<<endl;
	delete D;

	return 0;
	
}
