#include "user.h"

User::User(std::string name, double startBalance, double creditLimit) //разобрать
	: name(name), accaunt(Bank::CreateAccaunt(name, startBalance,creditLimit)) {}

void User::Deposit(double amount)
{
	Bank::Deposit(accaunt, amount);
}

void User::Withdraw(double amount)
{
	Bank::Withdraw(accaunt, amount);
}

double User::GetBalance() const
{
	return accaunt.GetBalance();
}
	

