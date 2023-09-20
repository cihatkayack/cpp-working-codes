/*
 * Account.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Account.h"

Account::Account():balance(){

}

void Account::print_initial_message(){
	cout << "Welcome to CK BANK!!!" << endl;
}
void Account::set_balance(int number){
	if (number >= 0) {
		balance = number;
	}else if(number < 0){
		cerr << "You balance is under the our limit. So your limit is 0" << endl;
		balance = 0;
	}
}
int Account::get_balance(){
	return balance;
}

void Account::member_function_credit(int value){
	balance2 = get_balance();
	balance2 += value;
	set_balance(balance2);
	display_balance();
}
void Account::display_balance(){
	cout << "Your Current Balance: " << get_balance() << endl;
}

void Account::member_function_debit(int value){
	balance2 = get_balance();
	balance2 -= value;
	if (balance2 >= 0){
		set_balance(balance2);
		display_balance();
	}else if(balance2 < 0){
		set_balance(balance);
		cout << "If you withdraw this money, there will be no money in your account" << endl;
		display_balance();
	}


}









