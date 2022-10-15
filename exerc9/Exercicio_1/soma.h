#ifndef SOMA_H
#define SOMA_H

class soma{
    private:
    int n;
    int m;

    public:
    soma(const int _n, const int _m);

    int somatorio(int iterations = 0, int result = 0);
    int getn() const;
    int getm() const;
};

#endif