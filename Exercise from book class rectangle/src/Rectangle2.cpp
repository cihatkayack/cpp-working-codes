/*
 * Rectangle2.cpp
 *
 *  Created on: Apr 16, 2022
 *      Author: win10
 */

#include "Rectangle2.h"

Rectangle2::Rectangle2(float x1, float x2,float y1,float y2){
	set_length2(x1,x2);
	set_width2(y1,y2);
}
void Rectangle2::set_length2(float value1, float value2){
	int remainder = 0;
	remainder = value1 - value2;
	if (remainder < 0){
		remainder *= -1;
	}
	if (remainder <= 20){
		length = remainder;
	}else {
		length = 0;
	}
}
void Rectangle2::set_width2(float value1, float value2){
	int remainder = 0;
	remainder = value1 - value2;
	if (remainder < 0){
		remainder *= -1;
	}
	if (remainder <= 20){
		width = remainder;
	}else {
		width = 0;
	}
}
float Rectangle2::get_length2(){
	return length;
}
float Rectangle2::get_width2(){
	return width;
}
float Rectangle2::perimeter2(){
	return 2*get_length2() + 2*get_width2();
}
float Rectangle2::area2(){
	return get_length2()*get_width2();
}
std::string Rectangle2::predicate(){
	if(get_length2()==get_width2()){
		return "Square";
	}
	return "Not Square";
}
