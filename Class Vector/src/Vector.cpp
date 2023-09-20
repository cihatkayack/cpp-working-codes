/*
 * Vector.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */

#include "Vector.h"

Vector::Vector(): x(0), y(0){

}
void Vector::setx(double value) {
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

void Vector::printvalue(){
	cout << "[" << getx() << " , " << gety() << "]" << endl;
}
