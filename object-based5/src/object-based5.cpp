//============================================================================
// Name        : object-based5.cpp
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
	string toString(){
	return "("+to_string(x)+","+to_string(y)+")";
	}
	Vektor toplam(Vektor v_girdi){
		Vektor toplam;
		toplam.setx(v_girdi.getx()+x);
		toplam.sety(v_girdi.gety()+y);
		return toplam;
	}


private:
	double x, y;
};


int main() {
	Vektor v1;v1.setx(1);v1.sety(5);
	Vektor v2;v2.setx(-1);v2.sety(1);
	Vektor toplam = v1.toplam(v2);
	cout << " v1 = (" << toplam.getx() << "," << toplam.gety() << ")" << endl;
	return 0;
}
























