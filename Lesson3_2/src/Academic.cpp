/*
 * Academic.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Academic.h"

Academic::Academic(std::string s1, std::string s2, int s3, Date s4, std::string s5):
Staff(s1,s2,s3,s4), title(s5) {}
std::string Academic::to_string(){
	std::string str_out;
	str_out = get_name() + "\n" + get_TC() + "\n" + std::to_string(get_staffid()) + "\n" + get_startingdate().to_string() + "\n" + title;
	return str_out;
}

