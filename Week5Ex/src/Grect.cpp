/*
 * Grect.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "Grect.h"

Grect::Grect(int x1,int x2,int x3,int x4):
GObject(x1,x2,x3,x4), width(150), height(75)    {}
int Grect::get_width(){
	return width;
}
int Grect::get_height(){
	return height;
}
std::string Grect::to_string(){
	std::string str_out;
	str_out = get_color() + " GRect with width " + std::to_string(get_width()) +
				" height: " + std::to_string(get_height()) + " start point: " + get_startpoint().to_string();
	return str_out;
}
