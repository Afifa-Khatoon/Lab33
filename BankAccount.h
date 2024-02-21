#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
private:
	string Name;
	double Balance;

public:

	BankAccount(string);
	BankAccount(string, double);

	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double); // encapsulation --- set means change, get means returns/shows
	string GetName();
	double GetBalance();

};