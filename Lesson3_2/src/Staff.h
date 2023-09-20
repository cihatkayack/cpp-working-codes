/*
 * Staff.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef STAFF_H_
#define STAFF_H_
#include <iostream>
#include <string>
#include "Date.h"

class Staff {
public:
	Staff();
	Staff(std::string, std::string, int, Date);
	std::string get_name();
	std::string get_TC();
	int get_staffid();
	Date get_startingdate();
	static int get_numstaff();
	std::string to_string();
private:
	std::string name, TC_ID;
	int staff_id = 1000;
	Date startingdate;
	static int num_staff;
};

#endif /* STAFF_H_ */
