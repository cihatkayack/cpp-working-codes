/*
 * Time.h
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#ifndef TIME_H_
#define TIME_H_
#include <iostream>
#include <string>

class Time {
public:
	Time(unsigned int, unsigned int);
	Time();
	void set_minute(int);
	void set_hour(int);
	std::string to_string();
private:
	unsigned int minute, hour;
};

#endif /* TIME_H_ */
