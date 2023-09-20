/*
 * Student.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include "Person.h"

class Student: public Person {
public:
	Student(std::string, std::string, int, int);
	std::string to_string();
private:
	int Class;
};

#endif /* STUDENT_H_ */
