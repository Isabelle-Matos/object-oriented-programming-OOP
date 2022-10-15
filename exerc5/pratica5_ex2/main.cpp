#include <iostream>
#include "package.h"
#include "TwoDayPackage.h"
#include "Overnightpackage.h"
int main(){
    Package *pacote = new Package("Rodrigo", "Ladeira dos Operários, 112, Viçosa", 34, 35);
    TwoDayPackage *pacote2 = new TwoDayPackage("Isabelle", "Ladeira dos Operários, 456, Viçosa", 45, 12, 23.56);
    OvernightPackage *pacote3 = new OvernightPackage("Julio", "UFV, Viçosa", 34, 12, 31.00);
    std::cout << pacote->calculateCost() << std::endl;
    std::cout <<pacote2->calculateCost() << std::endl;
    std::cout <<pacote3->calculateCost() << std::endl;

    delete pacote;
    delete pacote2;
    delete pacote3;

    return 0;
}
