//============================================================================
// Name        : Bank.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Account.h"
using namespace std;



Account debit(){
	Account debit;
	return debit;
}

int main() {
	Account(1000);
	Account costcredit;
	cout << "Your available balance: "<<Account::get_balance() << endl;
	costcredit.credit(1100);
	cout << "Your available balance: "<<Account::get_balance() << endl;

	return 0;
}
