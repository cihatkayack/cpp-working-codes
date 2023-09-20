/*
 * AcademicStaff.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef ACADEMICSTAFF_H_
#define ACADEMICSTAFF_H_
#include "Staff.h"
#include "Date.h"

class AcademicStaff: public Staff{
public:
	AcademicStaff(std::string, std::string, Date, std::string);
	std::string to_string();
private:
	std::string title;
};

#endif /* ACADEMICSTAFF_H_ */
