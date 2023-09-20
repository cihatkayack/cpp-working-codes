/*
 * Rectangle.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include <iostream>

class Rectangle {
public:
	Rectangle(int,int);
	std::string to_string();
private:
	int x,y,area;
};

#endif /* RECTANGLE_H_ */
