/*
 * Date.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Date.h"


Date::Date(unsigned int s1,unsigned int s2,unsigned int s3){
	set_day(s1);
	set_month(s2);
	set_year(s3);
}
void Date::set_day(int value){
	if (value >= 1 and value <= 31){
		day = value;
	}else{
		std::cerr << "Time is not in expected range" << std::endl;
		day = 1;
	}
}
void Date::set_month(int value){
	if (value >= 1 and value <= 12){
		month = value;
	}else{
		std::cerr << "Time is not in expected range" << std::endl;
		month = 1;
	}
}
void Date::set_year(int value){
	if (value >= 1 and value <= 2022){
		year = value;
	}else{
		std::cerr << "Time is not in expected range" << std::endl;
		year = 1;
	}
}

int Date::get_day(){
	return day;
}
int Date::get_month(){
	return month;
}
int Date::get_year(){
	return year;
}















