/*
 * Vector.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: win10
 */

#include "Vector.h"

Vector::Vector(int s1,int s2):x(s1), y(s2){

}
Vector::Vector():x(0),y(0){

}
int Vector::get_x(){
	return x;
}
int Vector::get_y(){
	return y;
}
void Vector::set_x(int value){
	x = value;
}
void Vector::set_y(int value){
	y = value;
}

std::string Vector::to_string(){
	return std::to_string(get_x()) + " + j" + std::to_string(get_y());
}
