#include "power.h"

power::power(int _k, int _n):
k(_k), n(_n){}

int power::getk()const{return k;}
int power::getn()const{return n;}

int power::expoente(int iterations, int result){

    //k elevado a n
    if(getn() == 0){return 1;}
    if(iterations == getn()){return result*getk();}
    else{
        int partial_res = result*getk();
        return expoente(iterations+1, partial_res);
    }
}