/*
 * Address.h
 *
 *  Created on: Apr 11, 2022
 *      Author: win10
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <iostream>
#include <string>
#include <cctype>

class Address {
public:
	Address(std::string, std::string, std::string);
	void set_name(std::string);
	void set_city(std::string);
	void set_postalcode(std::string);
	std::string get_name();
	std::string get_city();
	std::string get_postalcode();
	static int get_numofadress();
	std::string to_string();
private:
	std::string name, city, postalCode;
	static int numofadress;
};

#endif /* ADDRESS_H_ */
