//============================================================================
// Name        : Exercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Rectangle.h"
#include "Rectangle2.h"

using namespace std;

int main() {
	Rectangle rect1(10,10);
	cout << rect1.perimeter() << "-" << rect1.area() << endl;
//	below class calculate with cartesian coordinate sytstem
	Rectangle2 rect2(20, 10, 15, 5);
	cout << rect2.perimeter2() << "-" << rect2.area2();
	cout << "--" << rect2.predicate() << endl;
	return 0;
}
