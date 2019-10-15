#include <iostream>
#include<vector>
#include "atm.h"
#include "bank_account.h"
#include "customer.h"
#include "checking_account.h"


using std::cout; using std::vector; using std::cin;

int main()
{

	CheckingAccount a(1500);
	cout << a.get_balance();
	

	return 0;
}