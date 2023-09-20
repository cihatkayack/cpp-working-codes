/*
 * Vector.cpp
 *
 *  Created on: Mar 31, 2022
 *      Author: win10
 */

#include "Vector.h"

Vector::Vector():
x(0), y(0){}
void Vector::set_x(double value){
	x = value;
}
void Vector::set_y(double value){
	y = value;
}
double Vector::get_x() const{
	return x;
}
double Vector::get_y() const{
	return y;
}
std::string Vector::to_string() const{
	return std::to_string(get_x()) + "+ j" + std::to_string(get_y());
}
