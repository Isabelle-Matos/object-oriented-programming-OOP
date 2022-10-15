#include "soma.h"

soma::soma(const int _n, const int _m):n(_n),m(_m){}

int soma::getm()const{
    return m;
}
int soma::getn()const{
    return n;
}
int soma::somatorio(int iterations, int result){

    if((getm()+iterations) == getn()){return result + getn();}
    else{
        int partial_res = result+(getm()+iterations);
        return somatorio((iterations + 1), partial_res);
    }
}