/*
 * Rectangle.h
 *
 *  Created on: Apr 16, 2022
 *      Author: win10
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include <iostream>
#include <string>

class Rectangle {
public:
	Rectangle(float, float);
	void set_length(float);
	void set_width(float);
	float get_length();
	float get_width();
	float perimeter();
	float area();
private:
	unsigned int length, width;
};

#endif /* RECTANGLE_H_ */
