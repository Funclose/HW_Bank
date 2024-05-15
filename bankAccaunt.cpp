#include "exception.h"
#include "bankAccaunt.h"
#include "bank.h"



	BankAccaunt::BankAccaunt(std::string name, double startBalance, double creditLimit)
		: UserName(name), balance(startBalance), creditLimit(creditLimit), useCredit(false) {}

	void BankAccaunt::Deposit(double amount)
	{
		if (amount < 0)
		{
			throw ArgumentException("error u can't deposit however 0");
		}
		else
		{
			balance += amount;
		}
	}


	void BankAccaunt::Withdraw(double amount)
	{
			if (amount < 0)
			{
				throw ArgumentException("u cant withdraw 0");
			}
			if (amount > balance && !useCredit)
			{
				throw InsufficientFundsException("nedostatochno sredstv");
			}
			if (amount > balance && useCredit)
			{
				double remainBalance = amount - balance;
				balance = 0;
				throw InsufficientFundsException("insufficient funds, use creditLimit");
			}
			else
			{
				balance -= amount;
			}
	}
	

	void BankAccaunt::SetUseCredit(bool useCredit)
	{
		this->useCredit = useCredit;
	}

	double BankAccaunt::GetBalance() const
	{
		return balance;
	}




