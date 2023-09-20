#include <iostream>
using namespace std;
#include "GRect.h"
#include "GLine.h"
int main() {
	GRect box(100, 50, 350, 125);
	cout << "Width of box: " << box.getWidth();
	cout << ", Height of box: " << box.getHeight() << endl;
	box.setColor("red");
	cout << box.to_string() << endl;
	GLine myLine(0, 100, 250, 100, 5);
	myLine.setColor("blue");
	cout << myLine.to_string() << endl;
return 0;
}
