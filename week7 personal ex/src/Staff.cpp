/*
 * Staff.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Staff.h"

Staff::Staff(std::string s1, std::string s2, int s3, double s4):
Person(s1,s2,s3), salary(s4) {
	std::cout << "A new staff is created." << std::endl;
}

std::string Staff::to_string(){
	return Person::to_string() + " Salary: " + std::to_string(salary);
}
