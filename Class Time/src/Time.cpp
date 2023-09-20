/*
 * Time.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Time.h"

Time::Time():hour(), minute(), second() {
}

void Time::set_hour(int value){
	if (value >= 1 and value <= 12){
		hour = value;
	}else{
		cerr << "Hour is not in expected range" << endl;
		hour = -1;
	}
}

void Time::set_minute(int value){
	if (value >= 1 and  value <= 60){
		minute = value;
	}else{
		cerr << "Minute is not in expected range" << endl;
		minute = -1;
	}
}
void Time::set_second(int value){
	if (value >= 1 and value <= 60){
		second = value;
	}else{
		cerr << "Second is not in expected range" << endl;
		second = -1;
	}
}
int Time::get_hour(){
	return hour;
}

int Time::get_minute(){
	return minute;
}
int Time::get_second(){
	return second;
}

void Time::display_time(){
	cout << get_hour() << ":" << get_minute() << ":" << get_second() << endl;
}








