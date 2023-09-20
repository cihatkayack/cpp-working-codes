/*
 * Vector.h
 *
 *  Created on: Mar 29, 2022
 *      Author: win10
 */
#include <iostream>
using namespace std;

class Vector {
public:
	Vector();
	void setx(double);
	void sety(double);
	double getx();
	double gety();
	void printvalue();
private:
	double x, y;
};

