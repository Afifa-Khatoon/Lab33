#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
	string n;
	double b;

	cout << " What is the Account Name ==>";
	cin >> n;
	cout << "What is the Balance ==>";
	cin >> b;

	BankAccount Andrea(n, b);

	BankAccount Afifa(n);

	Afifa.SetBalance(10000);
	Andrea.Withdraw(400);
	Andrea.Deposit(100);

	cout << "\nAccount name: " << Andrea.GetName();
	cout << "\nAccount Balance: " << Andrea.GetBalance();


}