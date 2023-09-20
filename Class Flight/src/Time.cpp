/*
 * Time.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Time.h"

Time::Time(unsigned int h, unsigned int m){
	set_minute(m);
	set_hour(h);
}
Time::Time():minute(0), hour(0){

}
void Time::set_minute(int value){
	if (value >= 1 and value <= 60) {
		minute = value;
	}else {
		std::cerr << "Time is not in expected range..." << std::endl;
		minute = 1;
	}
}
void Time::set_hour(int value){
	if (value >= 1 and value <= 12) {
		hour = value;
	}else {
		std::cerr << "Time is not in expected range..." << std::endl;
		hour = 1;
	}

}
std::string Time::to_string(){
	return std::to_string(hour) + ":" + std::to_string(minute);
}
