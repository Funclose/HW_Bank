#pragma once
#include <string>

class BankAccaunt
{
private:
	std::string UserName;
	double balance;
	double creditLimit;
	bool useCredit;

public:
	BankAccaunt(std::string name, double startBalance, double creditLimit);
		
	void Deposit(double amount);

	void Withdraw(double amount);

	void SetUseCredit(bool useCredit);
	
	double GetBalance() const;

};




