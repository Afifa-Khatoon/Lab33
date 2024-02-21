#include "BankAccount.h"

BankAccount::BankAccount(string n, double b)
{
	this->Name = n;
	this->Balance = b;

}
BankAccount::BankAccount(string n)
{
	this->Name = n;
}

string BankAccount::GetName()
{
	return Name;
}

void BankAccount::Withdraw(double w)
{
	if (w > Balance) {
		cout << "There is not enough balance to withdraw money from the account" << endl;
	}
	else if (w > 500) {
		cout << "You cannot withdraw more than $500" << endl;
	}
	else {
		Balance = Balance - w;
	}

}

void BankAccount::Deposit(double d)
{
	if (d > 1000)
		cout << " You cannot desposit more than 1000 Dollars";
	else
		Balance = Balance + d;

}

void BankAccount::SetBalance(double s)
{
	Balance = s;
}
double BankAccount::GetBalance()
{
	return Balance;
}
