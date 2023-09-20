/*
 * Rectangle.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "Area.h"

class Rectangle: public Area {
public:
	Rectangle(double, double);
	double rectanglearea();
private:
	double RectangleArea;
};

#endif /* RECTANGLE_H_ */
