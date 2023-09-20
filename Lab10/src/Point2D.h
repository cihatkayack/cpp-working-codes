/*
 * Point2D.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef POINT2D_H_
#define POINT2D_H_
#include <iostream>

class Point2D {
public:
	Point2D(double, double);
	Point2D operator+(Point2D);
	Point2D operator/(double);
	bool operator>(Point2D);
	double get_x();
	double get_y();
	std::string to_string();
private:
	double x,y;
};

#endif /* POINT2D_H_ */
