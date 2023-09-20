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
	Time(int, int, int);
	void set_hour(int);
	void set_minute(int);
	void set_second(int);
	int get_hour() const;
	int get_minute() const;
	int get_second() const;
	std::string to_string() const;
private:
	int hour, minute, second;
};

#endif /* TIME_H_ */
