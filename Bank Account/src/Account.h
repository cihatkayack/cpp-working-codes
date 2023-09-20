/*
 * Account.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <iostream>

class Account {
public:
	Account(int);
	Account();
	void set_balance(int);
	void set_bank(int);
	int get_bank();
	static int get_balance();
	std::string to_string();
	int credit(int);
private:
	static int balance;
	int bankvalue, credits, count;
};

#endif /* ACCOUNT_H_ */
