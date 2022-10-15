#include <iostream>
using namespace std;
#include "retangulo.h"
void Rectangle::setlength(float Length){
	if(Length<0.0 || Length>20.0){
                cout <<"Numero invalido."<<endl;
                exit(1);
        }
        else{
		length = Length;
	}
}
float Rectangle::getlength(){
	return this->length;
}
void Rectangle::setwidth(float Width){
	if(Width <0.0 || Width >20.0){
                cout <<"Numero invalido."<<endl;
                exit(1);
        }
        else{
		width = Width;
	}
}
float Rectangle::getwidth(){
	return this->width;
}
float Rectangle::perimeter(){
	return this->getlength()+getlength();
}
float Rectangle::area(){
	return this->getlength()*getwidth();
}
