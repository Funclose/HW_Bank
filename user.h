#pragma once
#include <string>
#include "bank.h"
#include "bankAccaunt.h"
class User
{
private:
	std::string name;
	BankAccaunt accaunt;
public:
	User(std::string name, double startBalance, double creditLimit);

	void Deposit(double amount);
	void Withdraw(double amount);
	double GetBalance() const;

};

