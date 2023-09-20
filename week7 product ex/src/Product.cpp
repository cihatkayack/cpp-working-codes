/*
 * Product.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Product.h"

int Product::numProduct = 0;
Product::Product(std::string s1, std::string s2):date(s1), supplier(s2) {
	numProduct++;
}

std::string Product::to_string(){
	return date + " " + supplier;
}
