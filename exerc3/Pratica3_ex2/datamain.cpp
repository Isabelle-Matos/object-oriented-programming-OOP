#include <iostream>
#include "data.h"
using namespace std;
void Data::data_barras()
{
	cout << dia <<"/"<<mes<<"/"<<ano<<endl;
}
void Data::data_extenso()
{
	if(mes==1) cout<< dia <<" de Janeiro de "<<ano<<endl;
        if(mes==2) cout<< dia <<" de Fevereiro de "<<ano<<endl;
        if(mes==3) cout<< dia <<" de Marco de "<<ano<<endl;
        if(mes==4) cout<< dia <<" de Abril de "<<ano<<endl;
        if(mes==5) cout<< dia <<" de Maio de "<<ano<<endl;
        if(mes==6) cout<< dia <<" de Junho de "<<ano<<endl;
        if(mes==7) cout<< dia <<" de Julho de "<<ano<<endl;
        if(mes==8) cout<< dia <<" de Agosto de "<<ano<<endl;
        if(mes==9) cout<< dia <<" de Setembro de "<<ano<<endl;
        if(mes==10) cout<< dia <<" de Outubro de "<<ano<<endl;
        if(mes==11) cout<< dia <<" de Novembro de "<<ano<<endl;
        if(mes==12) cout<< dia <<" de Dezembro de "<<ano<<endl;
}
long long int Data::getDataEmSegundo(int dia, int mes, int ano)
{
	double day= ((ano-1970)*365.24 + (mes*30.44) + dia);
	int dayint= (int)day;
	return dayint*86400;
}
