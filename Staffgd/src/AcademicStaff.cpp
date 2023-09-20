/*
 * AcademicStaff.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "AcademicStaff.h"
#include "Date.h"

AcademicStaff::AcademicStaff(std::string s1, std::string s2, Date s3, std::string s4):
Staff(s1,s2,s3), title(s4){}
std::string AcademicStaff::to_string(){
	std::string str_out;
	str_out = "Name: " + get_name() + "\n" +
			"TC-ID: " + get_TC() + "\n" +
			"Staff-id: " + std::to_string(get_staffid()) + "\n" +
			"Title: " + title;
	return str_out;
}
