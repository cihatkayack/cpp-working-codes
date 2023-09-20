/*
 * Point.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Point.h"

Point::Point():x(0), y(0){

}
Point::Point(unsigned int s1, unsigned int s2):
x(s1), y(s2){}
std::string Point::to_string(){
	return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}
