/*
 * Address.h
 *
 *  Created on: Jun 26, 2022
 *      Author: win10
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>

class Address {
public:
	Address(std::string ,std::string, std::string);
	bool setName(std::string value);
	bool setCity(std::string value);
	bool setpostalCode(std::string value);
	std::string to_string();
	static int numofaddress;
private:
	std::string name, city, postalCode;
};

#endif /* ADDRESS_H_ */
