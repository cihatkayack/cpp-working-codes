/*
 * Product.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>

class Product {
public:
	Product(std::string, std::string);
	std::string to_string();
	static int numProduct;
protected:
	std::string date, supplier;
};

#endif /* PRODUCT_H_ */
