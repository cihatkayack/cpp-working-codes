/*
 * Person.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Person.h"

int Person::numPerson = 0;

Person::Person(std::string n, std::string tc, int a):name(n), TCid(tc), age(a) {
	numPerson++;
	std::cout << "A new person is created.\nThere is " << numPerson << " person." << std::endl;
}



std::string Person::to_string(){
	return "Name: " + name + " TC: " + TCid + " Age: " + std::to_string(age);
}
