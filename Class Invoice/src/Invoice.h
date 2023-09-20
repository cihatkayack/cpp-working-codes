/*
 * Invoice.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;
class Invoice {
public:
	Invoice(string, string, int, int);
	void set_partnumber(string);
	void set_description(string);
	void set_quantity(int);
	void set_price(int);
	string get_partnumber();
	string get_description();
	int get_quantity();
	int get_price();
	int multiplyes();
private:
	string part_number, descriptions;
	int quantity, price, product = 0, new_product = 1;
};


