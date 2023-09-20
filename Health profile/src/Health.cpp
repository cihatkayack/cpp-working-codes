/*
 * Health.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Health.h"

Health::Health():
firstname(0), lastname(0), gender(0), day(0), month(0), year(0), height(0), weight(0){}

Health::Health(std::string firstn, std::string lastn, std::string gen, int d, int m, int y, int h, int w):
firstname(firstn), lastname(lastn), gender(gen)
{
	set_day(d);
	set_month(m);
	set_year(y);
	set_height(h);
	set_weight(w);
}
void Health::set_day(int value){
	if (value >= 1 and value <= 31){
		day = value;
	}else{
		std::cerr << "Day is not in excepted range" << std::endl;
		day = 1;
	}
}
void Health::set_month(int value){
	if (value >= 1 and value <= 12){
		month = value;
	}else{
		std::cerr << "Month is not in excepted range" << std::endl;
		month = 1;
	}
}
void Health::set_year(int value){
	if (value >= 1 and value <= 2022){
		year = value;
	}else{
		std::cerr << "Year is not in excepted range" << std::endl;
		year = 1;
	}
}
void Health::set_height(int value){
	if (value > 0){
		height = value;
	}else{
		height = 1;
	}
}
void Health::set_weight(int value){
	if (value > 0){
		weight = value;
	}else{
		weight = 1;
	}
}


std::string Health::get_firstname() const{
	return firstname;
}
std::string Health::get_lastname() const{
	return lastname;
}
std::string Health::get_gender() const{
	return gender;
}
int Health::get_day() const{
	return day;
}
int Health::get_month() const{
	return month;
}
int Health::get_year() const{
	return year;
}
int Health::get_height() const{
	return height;
}
int Health::get_weight() const{
	return weight;
}
