/*
 * Staff.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Staff.h"

int Staff::num_staff = 0;

Staff::Staff(std::string s1, std::string s2, Date s3):
name(s1), TC_ID(s2), starting_date(s3), staff_id(0){
	num_staff++;
	staff_id = 1000 + num_staff;
}
std::string Staff::get_name(){
	return name;
}
std::string Staff::get_TC(){
	return TC_ID;
}
Date Staff::get_startingdate(){
	return starting_date;
}
int Staff::get_numstaff(){
	return num_staff;
}
int Staff::get_staffid(){
	return staff_id;
}
