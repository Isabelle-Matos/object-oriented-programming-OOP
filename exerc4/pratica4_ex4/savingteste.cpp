#include <iostream>
#include "savings.h"
SavingsAccount::SavingsAccount(float saldo){
	this->savingsBalance = saldo;
}
float SavingsAccount::calculateMonthlyInterest(){
	float juros;
	juros = ((this->getsavingsbalance())*(this->getannual()/100))/12;
	return this->getsavingsbalance()+juros;

}
void SavingsAccount::setsavingsbalance(float savingsbalance){
	savingsBalance = savingsbalance;
}
float SavingsAccount::getannual(){
	return annualInterestRate;
}
float SavingsAccount::getsavingsbalance(){
        return savingsBalance;
}
void SavingsAccount::modifyInterestRate(float annual){
	annualInterestRate = annual;
}
