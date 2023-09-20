/*
 * Area.h
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#ifndef AREA_H_
#define AREA_H_
#include <string>
#include <iostream>

class Area {
public:
	Area();
	Area(double);
	Area(double, double);
	double get_radius();
	double get_height();
	double get_width();
	std::string to_string();
	static int get_numofshape();
private:
	double radius, height, width;
	static int numof_shape;
};

#endif /* AREA_H_ */
