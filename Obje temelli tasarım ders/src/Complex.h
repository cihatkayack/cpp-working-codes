/*
 * Complex.h
 *
 *  Created on: May 28, 2022
 *      Author: win10
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

class Complex {
public:
	Complex(double,double);
	~Complex();
	void set_real(double);
	void set_imag(double);
	double get_real();
	double get_imag();
	std::string to_string();
	static int numComplex;
	Complex operator+(Complex);
	Complex operator/(double);
private:
	double real, imag;
};

#endif /* COMPLEX_H_ */
