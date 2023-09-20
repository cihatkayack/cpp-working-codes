/*
 * Staff.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef STAFF_H_
#define STAFF_H_
#include "Person.h"

class Staff: public Person {
public:
	Staff(std::string, std::string, int, double);
	std::string to_string();
private:
	double salary;
};

#endif /* STAFF_H_ */
