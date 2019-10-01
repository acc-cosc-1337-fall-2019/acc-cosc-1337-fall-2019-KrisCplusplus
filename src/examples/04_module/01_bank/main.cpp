#include <iostream>
#include "bank_account.h"

int main()
{
	BankAccount account;
	account.deposit(5);
	cout << account.get_balance();

	return 0;
}