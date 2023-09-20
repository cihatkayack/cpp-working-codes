/*
 * Rectangle2.h
 *
 *  Created on: Apr 16, 2022
 *      Author: win10
 */

#ifndef RECTANGLE2_H_
#define RECTANGLE2_H_
#include <iostream>
#include <string>

class Rectangle2 {
public:
	Rectangle2(float, float, float, float);
	void set_length2(float,float);
	void set_width2(float,float);
	float get_length2();
	float get_width2();
	float perimeter2();
	float area2();
	std::string predicate();
private:
	unsigned int length, width;
};

#endif /* RECTANGLE2_H_ */
