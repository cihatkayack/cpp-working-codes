/*
 * Point.cpp
 *
 *  Created on: Apr 4, 2022
 *      Author: win10
 */

#include "Point.h"

Point::Point(int s1, int s2): x(s1), y(s2){

}
std::string Point::to_string() const{
	std::string out_str;
	out_str = "(" + std::to_string(x) + "," + std::to_string(y) + ")";
	return out_str;
}
