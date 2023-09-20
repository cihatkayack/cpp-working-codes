//============================================================================
// Name        : week7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
	Rectangle shape1(3,4);
	cout << "Area of rectangle: " << shape1.to_string() << endl;
	Square shape2(5);
	cout << "Area of square: " << shape2.to_string() << endl;
	return 0;
}
