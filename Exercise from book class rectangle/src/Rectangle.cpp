/*
 * Rectangle.cpp
 *
 *  Created on: Apr 16, 2022
 *      Author: win10
 */

#include "Rectangle.h"

Rectangle::Rectangle(float len, float wid){
	set_length(len);
	set_width(wid);
}
void Rectangle::set_length(float value){
	if (value >= 0 and value <= 20){
		length = value;
	}else{
		std::cerr << "Length should be in the range of [0,20]" << std::endl;
		length = 0;
	}
}
void Rectangle::set_width(float value){
	if (value >= 0 and value <= 20){
		width = value;
	}else{
		std::cerr << "Width should be in the range of [0,20]" << std::endl;
		width = 0;
	}
}
float Rectangle::get_length(){
	return length;
}
float Rectangle::get_width(){
	return width;
}
float Rectangle::perimeter(){
	return 2*get_length() + 2*get_width();
}
float Rectangle::area(){
	return get_length()*get_width();
}
