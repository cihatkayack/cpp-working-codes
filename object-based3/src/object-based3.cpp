//============================================================================
// Name        : object-based3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Vektor{
public:
	double getx(){return x;}
	double gety(){return y;}
	void setx(double x_in){x = x_in;}
	void sety(double y_in){y = y_in;}
private:
	double x, y;
};

int main(){
	Vektor v1;
	v1.setx(1);
	v1.sety(5);
	cout << "v1 = " << v1.getx() << ", " << v1.gety() << endl;
	return 0;
}
