#pragma once
#include "bankAccaunt.h"
class Bank
{
public:
	static BankAccaunt CreateAccaunt(std::string userName, double startBalance, double CreditLimit);

	static void Deposit(BankAccaunt& accaunt, double amount);

	static void Withdraw(BankAccaunt& accaunt, double amount);
		
};

