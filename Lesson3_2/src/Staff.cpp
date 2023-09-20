/*
 * Staff.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Staff.h"

int Staff::num_staff = 0;

Staff::Staff():
name(0), TC_ID(0), staff_id(0){

}
Staff::Staff(std::string s1, std::string s2, int s3, Date s4):name(s1), TC_ID(s2), staff_id(s3), startingdate(s4)
{
	num_staff++;
	staff_id = 1000 + num_staff;

}
std::string Staff::get_name(){
	return name;
}
std::string Staff::get_TC(){
	return TC_ID;
}
int Staff::get_staffid(){
	return staff_id;
}
Date Staff::get_startingdate(){
	return startingdate;
}
int Staff::get_numstaff(){
	return num_staff;
}

std::string Staff::to_string(){
	std::string str_out;
	str_out = name + "\n" + TC_ID + "\n" + startingdate.to_string() + "\n";
	return str_out;
}
