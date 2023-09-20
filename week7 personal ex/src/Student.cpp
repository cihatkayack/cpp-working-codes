/*
 * Student.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Student.h"

Student::Student(std::string s1, std::string s2, int s3, int s4):
Person(s1,s2,s3),Class(s4) {
	std::cout << "A new student is created." << std::endl;
}

std::string Student::to_string(){
	return Person::to_string() + " Class: " + std::to_string(Class);
}

