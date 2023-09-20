/*
 * Account.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;

class Account {
public:
	Account();
	void print_initial_message();
	void set_balance(int);
	int get_balance();
	void member_function_credit(int);
	void display_balance();
	void member_function_debit(int);
private:
	int balance, balance2;
};

