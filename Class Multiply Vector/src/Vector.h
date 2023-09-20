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
	void print_vector();
	void print_multiply();
	string to_string();
	Vector multvectors(Vector, Vector);
private:
	double x, y;
};

