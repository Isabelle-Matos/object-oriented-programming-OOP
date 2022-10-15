#ifndef POWER_H
#define POWER_H

class power{
    private:
    int k;
    int n;

    public:
    power(int _k, int _n);
    int getk()const;
    int getn()const;
    int expoente(int iterations = 1, int result = 1);
};

#endif