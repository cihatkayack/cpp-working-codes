//============================================================================
// Name        : Account.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Account.h"

int main() {
	Account initial_message;
	initial_message.print_initial_message();
	int balance, credit, debit, choice;
	cout << "Please enter your current balance: ";
	cin >> balance;
	Account current_balance;
	current_balance.set_balance(balance);
	current_balance.display_balance();
	do{
	cout << "CREDIT = 1, DEBIT = 2, EXIT = 0" << endl;
	cin >> choice;
	if (choice == 1){
		cout << "please enter what you want to add your balance: ";
		cin >> credit;
		current_balance.member_function_credit(credit);
	}else if(choice == 2){
		cout << "please enter what you want to remove your balance: ";
		cin >> debit;
		current_balance.member_function_debit(debit);
	}
	}while(choice != 0);
	return 0;
}
