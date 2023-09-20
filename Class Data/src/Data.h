/*
 * Data.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;



class Data {
public:
	Data(int,int,int);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	int get_day();
	int get_month();
	int get_year();
	void display_date();
private:
	int day, month, year;
};

