/*
 * Staff.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef STAFF_H_
#define STAFF_H_
#include "Date.h"

class Staff {
public:
	Staff(std::string, std::string, Date);
	std::string get_name();
	std::string get_TC();
	Date get_startingdate();
	static int get_numstaff();
	int get_staffid();
private:
	std::string name, TC_ID;
	int staff_id;
	Date starting_date;
	static int num_staff;
};

#endif /* STAFF_H_ */
