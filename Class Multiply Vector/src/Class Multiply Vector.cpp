//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Vector.h"
Vector sumvectors(Vector v1, Vector v2){
	Vector sum;
	sum.setx(v1.getx() + v2.getx());
	sum.sety(v1.gety() + v2.gety());
	return sum;
}
Vector multvectors(Vector v1, Vector v2){
	Vector multiply;
	multiply.setx(v1.getx() * v2.getx() - v1.gety() * v2.gety());
	multiply.sety(v1.getx() * v2.gety() + v1.gety() * v2.getx());
	return multiply;
}

int main() {
	Vector v1, v2;
	v1.setx(3);
	v1.sety(2);
	v2.setx(1);
	v2.sety(7);

	v1.print_vector();
	v2.print_vector();

	Vector sum = sumvectors(v1, v2);
	sum.print_vector();
	cout << sum.to_string() << endl;

	Vector mult = multvectors(v1, v2);
	mult.print_multiply();
	cout << mult.to_string() << endl;
	return 0;
}










