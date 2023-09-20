/*
 * Time.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include <iostream>
using namespace std;

class Time {
public:
	Time();
	void set_hour(int);
	void set_minute(int);
	void set_second(int);
	int get_hour();
	int get_minute();
	int get_second();
	void display_time();
private:
	int hour, minute, second;
};


