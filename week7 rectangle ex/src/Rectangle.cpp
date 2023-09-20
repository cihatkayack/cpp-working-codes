/*
 * Rectangle.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Rectangle.h"

Rectangle::Rectangle(int num1, int num2):x(num1), y(num2) {
	area = x*y;
}

std::string Rectangle::to_string(){
	return std::to_string(area);
}


