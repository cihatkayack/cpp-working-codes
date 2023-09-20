/*
 * Complex.cpp
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#include "Complex.h"

int Complex::numComplex = 0;
Complex::Complex(double num1, double num2):real(num1), imag(num2) {
	numComplex++;
}

Complex::~Complex() {
	numComplex--;
}
void Complex::set_real(double value){
	real = value;
}
void Complex::set_imag(double value){
	imag = value;
}
double Complex::get_real(){
	return real;
}
double Complex::get_imag(){
	return imag;
}

std::string Complex::to_string(){
	std::string std_out;
	std_out = std::to_string(real) + " + " + std::to_string(imag) + " *j";
	return std_out;
}

Complex Complex::operator+(Complex another){
	Complex total(real + another.get_real(), imag + another.get_imag());
	return total;
}

Complex Complex::operator/(double ratio){
	Complex divide(real/ratio, imag/ratio);
	return divide;
}
