#include <iostream>
#include<vector>
#include "atm.h"
#include "bank_account.h"
#include "customer.h"


using std::cout; using std::vector; using std::cin;

int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a);//class friend function
	//scan card and enter pin
	//get customer records from db into a vector
	vector<BankAccount> account{BankAccount(500), BankAccount(600), BankAccount(1000),
		BankAccount(9000)};
	Customer customer;
	customer.add_account(BankAccount(500));
	customer.add_account(BankAccount(1500));
	customer.add_account(BankAccount(5000));

	cout << customer;

	return 0;
}