#include <string>
#include <vector>

class Account
{
public:
	Account(int bal) : balance(bal) {}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdrawl(int money)
	{
		balance -= money;
	}


private:
	int balance;
};
