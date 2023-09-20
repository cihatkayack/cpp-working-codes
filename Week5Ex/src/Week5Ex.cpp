//============================================================================
// Name        : Week5Ex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Point.h"
#include "GObject.h"
#include "Gline.h"
#include "Grect.h"
using namespace std;

int main() {
	Grect box(100, 50, 250, 125);
	cout << "Width of box: " << box.get_width();
	cout << ", Height of box: " << box.get_height() << endl;
	box.set_color("red");
	cout << box.to_string() << endl;
	//Creating a GLine object and printing properties on console
	// parameters: (x1, y1, x2, y2, thickness)
	Gline myLine(0, 100, 250, 100, 5);
	myLine.set_color("blue");
	cout << myLine.to_string() << endl;

	return 0;
}
