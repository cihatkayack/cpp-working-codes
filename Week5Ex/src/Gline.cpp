/*
 * Gline.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Gline.h"

Gline::Gline(int s1,int s2,int s3,int s4,int s5):
GObject(s1,s2,s3,s4), thickness(s5)  {}

std::string Gline::to_string(){
	std::string str_out;
	str_out = get_color() + " Gline with thickness " + std::to_string(thickness) +
			" at start point: " + get_startpoint().to_string() + " and end point: " + get_endpoint().to_string();
	return str_out;
}
