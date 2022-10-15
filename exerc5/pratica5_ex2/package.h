#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
class Package{
private:
    std::string _nome;
    std::string _endereco;
    unsigned int _peso;
    unsigned int _custo;
public:
    Package(std::string nome, std::string endereco, int peso, int custo);
    virtual double calculateCost();
    std::string getnome() const;
    std::string getendereco() const;
    unsigned int getpeso();
    unsigned int getcusto();
    
    
};
#endif
