/*
 * Account.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Account.h"

int Account::balance = 0;

Account::Account(int num){
	set_balance(num);
}
Account::Account():bankvalue(0){

}
void Account::set_balance(int value){
	if (value  >= 0){
		balance = value;
	}else if(value < 0){
		std::cerr << "Your balance under the zero.." << std::endl;
		balance = 0;
	}
}
void Account::set_bank(int value){
	bankvalue = value;
}
int Account::get_bank(){
	return bankvalue;
}
int Account::get_balance(){
	return balance;
}
std::string Account::to_string(){
	return std::to_string(balance);
}
int Account::credit(int value){
	credits = value;
	count = credits + Account::get_balance();
	if (count >= 0){
		set_balance(count);
		return count;
	}
	std::cerr << "Your balance with credit under zero.. Your balance is still: " << get_balance() << std::endl;
	return Account::get_balance();
}




