/*
 * Date.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef DATE_H_
#define DATE_H_
#include <iostream>
#include <string>
class Date {
public:
	Date(unsigned int, unsigned int, unsigned int);
	Date();
	void set_day(int);
	void set_month(int);
	void set_year(int);
	std::string to_string();
private:
	unsigned int day, month, year;
};

#endif /* DATE_H_ */
