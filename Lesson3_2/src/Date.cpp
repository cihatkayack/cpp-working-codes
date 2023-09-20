/*
 * Date.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Date.h"

Date::Date(unsigned int d,unsigned int m,unsigned int y){
	set_day(d);
	set_month(m);
	set_year(y);
}

Date::Date():
day(0), month(0), year(0){}

void Date::set_day(int value){
	if (value >= 1 and value <= 31){
		day = value;
	}else{
		std::cerr << "Time is not in expected range..." << std::endl;
		day = 1;
	}
}
void Date::set_month(int value){
	if (value >= 1 and value <= 12){
		month = value;
	}else{
		std::cerr << "Time is not in expected range..." << std::endl;
		month = 1;
	}
}
void Date::set_year(int value){
	if (value >= 1 and value <= 2022){
		year = value;
	}else{
		std::cerr << "Time is not in expected range..." << std::endl;
		year = 1;
	}
}
std::string Date::to_string(){
	return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}

