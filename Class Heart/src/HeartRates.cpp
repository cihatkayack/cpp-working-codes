/*
 * HeartRates.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "HeartRates.h"

HeartRates::HeartRates(string fname, string lname, int day, int month, int year){
	set_firstname(fname);
	set_lastname(lname);
	set_day(day);
	set_month(month);
	set_year(year);
}

void HeartRates::set_firstname(string name){
	first_name = name;
}
void HeartRates::set_lastname(string name){
	last_name = name;
}
void HeartRates::set_day(int value){
	day = value;
}
void HeartRates::set_month(int value){
	month = value;
}
void HeartRates::set_year(int value){
	year = value;
}
string HeartRates::get_firstname(){
	return first_name;
}
string HeartRates::get_lastname(){
	return last_name;
}
int HeartRates::get_day(){
	return day;
}
int HeartRates::get_month(){
	return month;
}
int HeartRates::get_year(){
	return year;
}

int HeartRates::get_age(){
	if (get_month() >= 6){
		if (get_day() != 1) {
			count = get_year() + 1;
			return 2022 - count;
		}else if (get_day() == 1){
			return 2022 - get_year();
		}
	}else if (get_month() < 6){
		return 2022 - get_year();
	}
	return 0;
}

int HeartRates::getmaxheart(){
	max_rate = 220 - get_age();
	return max_rate;
}

void HeartRates::gettargetrate(){
	target1 = (getmaxheart() * 50) / 100;
	target2 = (getmaxheart() * 85) / 100;
	cout << "Target Range = [" << target1 << ", " << target2 << "]" << endl;
}





