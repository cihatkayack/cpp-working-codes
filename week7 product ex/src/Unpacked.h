/*
 * Unpacked.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef UNPACKED_H_
#define UNPACKED_H_
#include "Product.h"

class Unpacked: public Product {
public:
	Unpacked(std::string, std::string,std::string, double, double);
	std::string to_string();
	static int totalPrice;
private:
	std::string type;
	double kgprice, totalkg;
};

#endif /* UNPACKED_H_ */
