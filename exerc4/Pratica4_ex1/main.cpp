#include <iostream>
using namespace std;
#include "retangulo.h"
int main()
{
	Rectangle rectangle;
	rectangle.setlength(10.3);
	rectangle.setwidth(21.0);
	cout << rectangle.getlength() << " "<< rectangle.getwidth() << endl;
	cout<<rectangle.perimeter()<<endl;
	cout <<rectangle.area()<<endl;
	
	
}
