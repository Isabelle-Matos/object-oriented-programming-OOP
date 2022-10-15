class SavingsAccount{
public:
	SavingsAccount(float saldo);
	float calculateMonthlyInterest();
	static float annualInterestRate;
	float getsavingsbalance();
	static float getannual();
	void setsavingsbalance(float savingsbalance);
	static void modifyInterestRate(float annual);
	
private:
	float savingsBalance;
};
