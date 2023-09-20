//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Vector.h"

Vector sumvector(Vector v1, Vector v2) {
	Vector sum;
	sum.setx(v1.getx() + v2.getx());
	sum.sety(v1.gety() + v2.gety());
	return sum;
}


int main() {
	Vector v1, v2;
	v1.setx(3);
	v1.sety(5);
	v2.setx(-3);
	v2.sety(4);

	v1.printvalue();
	v2.printvalue();

	Vector total = sumvector(v1, v2);
	total.printvalue();

	return 0;
}
