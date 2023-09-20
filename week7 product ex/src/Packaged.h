/*
 * Packaged.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef PACKAGED_H_
#define PACKAGED_H_
#include "Product.h"

class Packaged: public Product {
public:
	Packaged(std::string, std::string,std::string, double, int);
	std::string to_string();
	static int totalPrice;
private:
	std::string brandmodel;
	double packageprice;
	int packagenumber;
};

#endif /* PACKAGED_H_ */
