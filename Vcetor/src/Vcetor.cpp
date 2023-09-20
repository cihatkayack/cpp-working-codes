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
	sum.set_x(v1.get_x() + v2.get_x());
	sum.set_y(v1.get_y() + v2.get_y());
	return sum;
}


int main() {
	Vector v1(3, 2);
	Vector v2(1, 7);

	Vector sum = sumofvectors(v1, v2);
	cout << sum.to_string() << endl;

	return 0;
}
