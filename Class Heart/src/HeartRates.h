/*
 * HeartRates.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
#include <string>
using namespace std;

class HeartRates {
public:
	HeartRates(string, string, int, int, int);
	void set_firstname(string);
	void set_lastname(string);
	void set_day(int);
	void set_month(int);
	void set_year(int);
	string get_firstname();
	string get_lastname();
	int get_day();
	int get_month();
	int get_year();
	int get_age();
	int getmaxheart();
	void gettargetrate();
private:
	string first_name, last_name;
	int day, month, year, count, max_rate, target1, target2;
};

