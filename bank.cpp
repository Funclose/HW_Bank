#include "bank.h"

BankAccaunt Bank::CreateAccaunt(std::string userName, double startBalance, double CreditLimit)
{
	return BankAccaunt(userName, startBalance, CreditLimit);
}

void Bank::Deposit(BankAccaunt& accaunt, double amount)
{
	accaunt.Deposit(amount);
}

void Bank::Withdraw(BankAccaunt& accaunt, double amount)
{
	accaunt.Withdraw(amount);
}
