#include "mdc.h"

mdc::mdc(int _x, int _y):
x(_x), y(_y){}

int mdc::getx()const{return x;}
int mdc::gety()const{return y;}

int mdc::MDC(int _x, int _y){
    if (_y == 0){return _x;}
    else{return MDC(_y, _x%_y);}
}