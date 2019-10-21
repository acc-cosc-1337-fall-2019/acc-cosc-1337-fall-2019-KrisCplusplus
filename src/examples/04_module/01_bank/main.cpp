#include <iostream>
#include<vector>
#include "atm.h"
#include "bank_account.h"
#include "customer.h"
#include "checking_account.h"
#include "savings_account.h"


using std::cout; using std::vector; using std::cin;

int main()
{

	CheckingAccount checking(1500);
	cout << "\n Savings get_balance: " << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	cout << "\n Savings get_balance: " << savings.get_balance() <<"\n";

	BankAccount& account = savings;
	cout<< "\n Ref to savings get_balance: " << account.get_balance() <<"\n"
	
	return 0;
}