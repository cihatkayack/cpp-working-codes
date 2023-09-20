/*
 * Person.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>

class Person {
public:
	Person(std::string, std::string, int);
	std::string to_string();
protected:
	std::string name, TCid;
	int age;
	static int numPerson;
};

#endif /* PERSON_H_ */
