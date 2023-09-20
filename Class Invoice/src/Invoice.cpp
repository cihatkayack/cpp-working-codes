/*
 * Invoice.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Invoice.h"

Invoice::Invoice(string partnumber, string description, int amount, int cost){
	set_partnumber(partnumber);
	set_description(description);
	set_quantity(amount);
	set_price(cost);
}

void Invoice::set_partnumber(string type){
	part_number = type;
}
void Invoice::set_description(string type){
	descriptions = type;
}
void Invoice::set_quantity(int value){
	quantity = value;
}
void Invoice::set_price(int value){
	price = value;
}

string Invoice::get_partnumber(){
	return part_number;
}
string Invoice::get_description(){
	return descriptions;
}
int Invoice::get_quantity(){
	return quantity;
}
int Invoice::get_price(){
	return price;
}

int Invoice::multiplyes(){
	new_product = get_quantity() * get_price();
	if (new_product >= 0){
		return new_product;
	}else if (new_product < 0){
		return product;
	}
	return 0;

}










