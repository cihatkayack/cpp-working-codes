/*
 * Date.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef DATE_H_
#define DATE_H_
#include <string>
#include <iostream>

class Date {
public:
	Date(unsigned int,unsigned int,unsigned int);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_day();
	int get_month();
	int get_year();
private:
	unsigned int day, month, year;
};

#endif /* DATE_H_ */
