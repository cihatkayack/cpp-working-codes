/*
 * Point2D.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Point2D.h"
#include <cmath>

Point2D::Point2D(double s1, double s2):x(s1), y(s2) {
}

Point2D Point2D::operator+(Point2D another){
	Point2D total(x + another.get_x(), y + another.get_y());
	return total;
}
Point2D Point2D::operator/(double ratio){
	Point2D divide(x/ratio, y/ratio);
	return divide;
}

bool Point2D::operator>(Point2D another){
	double root1, root2;
	root1 = sqrt(x*x + y*y);
	root2 = sqrt(another.get_x()*another.get_x() + another.get_y()*another.get_y());
	return root1 > root2;
}

double Point2D::get_x(){
	return x;
}
double Point2D::get_y(){
	return y;
}

std::string Point2D::to_string(){
	return std::to_string(x) + " " + std::to_string(y);
}

