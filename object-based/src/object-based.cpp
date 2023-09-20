//============================================================================
// Name        : object-based.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vektor{
public:
	double x,y;
};

int main(){
	Vektor v1;
	v1.x = 1;
	v1.y = 5;
	cout << "v1 = " << v1.x << ", " << v1.y << endl;
	return 0;
}
