/*
 * Invoice.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Invoice.h"

Invoice::Invoice(int partnum, std::string partdecp, int qua, int pri):
part_number(partnum), part_desp(partdecp), guantity(qua), price(pri), product(0){}

int Invoice::get_partnumber() const{
	return part_number;
}
std::string Invoice::get_part_desp() const{
	return part_desp;
}
int Invoice::get_quantity() const{
	return guantity;
}
int Invoice::get_price() const{
	return price;
}
std::string Invoice::to_string() const{
	std::string out_str;
	out_str = "Part number: " + std::to_string(get_partnumber()) + "\n";
	out_str += "Part descp: " + get_part_desp() + "\n";
	out_str += "Part quantity: " + std::to_string(get_quantity()) + "\n";
	out_str += "Part price: " + std::to_string(get_price()) + "\n";
	return out_str;
}

int Invoice::InvoiceAmount(){
	product = get_price() * get_quantity();
	return product;
}









