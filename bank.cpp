#include "bank.h"
#include "exception.h"

BankAccaunt Bank::CreateAccaunt(std::string userName, double startBalance, double CreditLimit)
{
	return BankAccaunt(userName, startBalance, CreditLimit);
}

void Bank::Deposit(BankAccaunt& accaunt, double amount)
{
	try
	{
	accaunt.Deposit(amount);
	}
	catch (ArgumentException &err)
	{
		throw ArgumentException("u cant deposit 0 or lower");
	}
}

void Bank::Withdraw(BankAccaunt& accaunt, double amount)
{
	try
	{
	accaunt.Withdraw(amount);
	}
	catch(ArgumentException &err)
	{
		throw ArgumentException("u can't withdraw 0 or lower");
	}
	catch(InsufficientFundsException &err)
	{
		throw InsufficientFundsException("nedostatochno sredstv");
	}
}
