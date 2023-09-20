/*
 * Invoice.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef INVOICE_H_
#define INVOICE_H_
#include <iostream>
#include <string>

class Invoice {
public:
	Invoice(int, std::string, int , int);
	int get_partnumber() const;
	std::string get_part_desp() const;
	int get_quantity() const;
	int get_price() const;
	std::string to_string() const;
	int InvoiceAmount();
private:
	int part_number, guantity, price, product;
	std::string part_desp;
};

#endif /* INVOICE_H_ */
