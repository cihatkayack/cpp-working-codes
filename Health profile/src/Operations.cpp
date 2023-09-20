/*
 * Operations.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Operations.h"

int users_age(Health person){
	int day, month, year, age;
	day = person.get_day();
	month = person.get_month();
	year = person.get_year();
	if (day > 0 and month > 5){
		age = 2022 - year - 1;
	}else{
		age = 2022 - year;
	}

	return age;
}

int max_heart_rate(Health person){
	int rate;
	rate = 220 - users_age(person);
	return rate;
}

std::string target_heart_rate(Health person){
	int target1, target2;
	target1 = (max_heart_rate(person) * 50) / 100;
	target2 = (max_heart_rate(person) * 85) / 100;
	return std::to_string(target1) + "-" + std::to_string(target2);
}

double bmi(Health person){
	double bodymassindex;
	bodymassindex = double(person.get_weight()) / ((double(person.get_height())/ 100) * (double(person.get_height()))/ 100);
	return bodymassindex;
}
std::string to_string(Health person){
	std::string out_str;
	out_str = "Name: " + person.get_firstname() + "\n";
	out_str += "Surname: " + person.get_lastname() + "\n";
	out_str += "Gender: " + person.get_gender() + "\n";
	out_str += "Birth of year: " + std::to_string(person.get_day()) + "/" + std::to_string(person.get_month()) + "/" + std::to_string(person.get_year()) + "\n";
	out_str += "Age:" + std::to_string(users_age(person)) + "\n";
	out_str += "Max Heart Rate: " +  std::to_string(max_heart_rate(person)) + "\n";
	out_str += "Target Heart Range: " + target_heart_rate(person) + "\n";
	out_str += "BMI: " + std::to_string(bmi(person)) + "\n";
	return out_str;
}


