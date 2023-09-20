/*
 * Area.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Area.h"


int Area::numof_shape = 0;
Area::Area():radius(0), height(0), width(0){
	numof_shape++;
}
Area::Area(double r):radius(r), height(0), width(0){
	numof_shape++;
}
Area::Area(double h, double w):radius(0), height(h), width(w){
	numof_shape++;
}
double Area::get_radius(){
	return radius;
}
double Area::get_height(){
	return height;
}
double Area::get_width(){
	return width;
}
std::string Area::to_string(){
	std::string str_out;
	str_out = "Your Shape's Area: ";
	return str_out;
}
int Area::get_numofshape(){
	return numof_shape;
}
