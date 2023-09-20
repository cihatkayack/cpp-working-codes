/*
 * Data.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Data.h"

Data::Data(int num1, int num2, int num3){
	set_month(num1);
	set_day(num2);
	set_year(num3);
}

void Data::set_day(int value){
	if (value <= 31 and value >= 1) {
		day = value;
	}else{
		day = 1;
	}
}
void Data::set_month(int value){
	if (value <= 12 and value >= 1) {
		month = value;
	}else{
		month = 1;
	}
}
void Data::set_year(int value){
	year = value;
}

int Data::get_day(){
	return day;
}
int Data::get_month(){
	return month;
}
int Data::get_year(){
	return year;
}

void Data::display_date(){
	cout << get_month()  << "/" << get_day()<< "/" << get_year() << endl;
}












