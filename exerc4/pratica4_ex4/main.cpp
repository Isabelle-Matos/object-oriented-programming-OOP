#include <iostream>
#include "savings.h"
using namespace std;
float SavingsAccount::annualInterestRate = 0;

int main(void){

	SavingsAccount saver1 = SavingsAccount(2000);
	SavingsAccount saver2 = SavingsAccount(3000);
	
	SavingsAccount::annualInterestRate = 3.00;
	cout << saver1.calculateMonthlyInterest() <<endl;
	cout << saver2.calculateMonthlyInterest() <<endl;
	
	saver1.modifyInterestRate(4.00);
	
	cout << saver1.calculateMonthlyInterest() <<endl;
	cout << saver2.calculateMonthlyInterest() <<endl;
	return 0;	
}
