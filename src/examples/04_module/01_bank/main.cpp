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

	CheckingAccount a(1500);
	cout << a;


	SavingsAccount savings(500);
	cout <<"Calls bank account overload ostream" << savings;
	cout << "\n Savings get_balance" << savings.get_balance() <<"\n";
	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;

	cout << c;

	return 0;
}