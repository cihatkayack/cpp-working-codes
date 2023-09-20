//============================================================================
// Name        : Vectorrr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Vector.h"
using namespace std;

Vector sumofvectors(Vector v1, Vector v2){
	Vector sum;
	sum.set_x((v1.get_x() + v2.get_x()));
	sum.set_y((v1.get_y() + v2.get_y()));
	return sum;
}

Vector productofvector(Vector v1, Vector v2){
	Vector mult;
	mult.set_x(v1.get_x() * v2.get_x() - v1.get_y() * v2.get_y());
	mult.set_y(v1.get_y() * v2.get_x() + v1.get_x() * v2.get_y());
	return mult;
}


int main() {
	Vector v1, v2;
	v1.set_x(3);
	v1.set_y(2);
	v2.set_x(1);
	v2.set_y(7);


	Vector sum = sumofvectors(v1, v2);
	cout << sum.to_string() << endl;
	Vector mult = productofvector(v1, v2);
	cout << mult.to_string() << endl;

	return 0;
}
