//============================================================================
// Name        : ThreeShape'sArea.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Area.h"
#include "Rectangle.h"
#include "Oval.h"
#include "Triangle.h"
using namespace std;

int main() {
	int choice, height, width, radius;
	cout << "This program calculate three shape's area of given value." << endl;
	do{
		cout << "Please enter a value which for shape." << endl;
		cout << "0-Exit, 1-Triangle, 2-Rectangle, 3-Oval" << endl;
		cin >> choice;
		if (choice == 1){
			cout << "Enter height and width: ";
			cin >> height >> width;
			Triangle trianglearea(height, width);
			cout << trianglearea.to_string() << trianglearea.trianglearea() << endl;
		}else if (choice == 2){
			cout << "Enter height and width: ";
			cin >> height >> width;
			Rectangle rectanglearea(height, width);
			cout << rectanglearea.to_string() << rectanglearea.rectanglearea() << endl;
		}else if(choice == 3){
			cout << "Enter radius: ";
			cin >> radius;
			Oval ovalarea(radius);
			cout << ovalarea.to_string() << ovalarea.ovalarea() << endl;
		}

	}while(choice != 0);

	cout << "Num of given shape: " << Area::get_numofshape() << endl;
	return 0;
}
