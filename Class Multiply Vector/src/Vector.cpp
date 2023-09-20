/*
 * Vector.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Vector.h"

Vector::Vector(): x(0), y(0) {

}
void Vector::setx(double value){
	x = value;
}
void Vector::sety(double value){
	y = value;
}
double Vector::getx(){
	return x;
}
double Vector::gety(){
	return y;
}
void Vector::print_vector(){
	cout << "[" << getx() << " , " << gety() << "]" << endl;
}
void Vector::print_multiply(){
	cout << getx() << " + " << gety() << "i" << endl;
}

string Vector::to_string(){
	return std::to_string(getx()) + "+ j" + std::to_string(gety());
}














