/*
 * GObject.cpp
 *
 *  Created on: Apr 2, 2022
 *      Author: win10
 */

#include "GObject.h"

GObject::GObject(int s1,int s2,int s3,int s4):start(s1,s2), end(s3,s4){

}



Point GObject::get_startpoint(){
	return start;
}
Point GObject::get_endpoint(){
	return end;
}

void GObject::set_color(std::string value){
	color = value;
}
std::string GObject::get_color(){
	return color;
}

std::string GObject::to_string(){
	return get_startpoint().to_string() + "-" + get_endpoint().to_string();
}














