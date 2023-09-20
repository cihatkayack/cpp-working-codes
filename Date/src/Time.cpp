/*
 * Time.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Time.h"

Time::Time(int num1, int num2, int num3){
	set_hour(num1);
	set_minute(num2);
	set_second(num3);
}
void Time::set_hour(int value){
	if (value >= 1 and value <= 24){
		hour = value;
	}else {
		std::cerr << "Time is not in expected range." << std::endl;
		hour = -1;
	}
}
void Time::set_minute(int value){
	if (value >= 1 and value <= 60){
		minute = value;
	}else {
		std::cerr << "Time is not in expected range." << std::endl;
		minute = -1;
	}
}
void Time::set_second(int value){
	if (value >= 1 and value <= 60){
		second = value;
	}else {
		std::cerr << "Time is not in expected range." << std::endl;
		second = -1;
	}
}
int Time::get_hour() const{
	return hour;
}
int Time::get_minute() const{
	return minute;
}
int Time::get_second() const{
	return second;
}
std::string Time::to_string() const{
	return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
}




