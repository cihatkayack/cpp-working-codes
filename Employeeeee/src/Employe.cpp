/*
 * Employe.cpp
 *
 *  Created on: Apr 1, 2022
 *      Author: win10
 */

#include "Employe.h"


Employe::Employe(std::string name1, std::string name2, int num):
firstn(name1), lastn(name2), new_salary(0){
	set_salary(num);
}

std::string Employe::get_firstname(){
	return firstn;
}
std::string Employe::get_lastname(){
	return lastn;
}
void Employe::set_salary(int value){
	if (value < 0){
		salary = 0;
	}else {
		salary = value;
	}
}

int Employe::get_salary(){
	return salary;
}

std::string Employe::to_stringmaas(){
	return firstn + " " + lastn + " " + std::to_string(show_yearlysalary());
}

int Employe::show_yearlysalary(){
	return 12 * get_salary();
}

void Employe::give_raise(){
	new_salary = get_salary() + (get_salary() * 10) / 100;
	set_salary(new_salary);
}







