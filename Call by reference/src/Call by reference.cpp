//============================================================================
// Name        : Call.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void degistir(int & x_in){
	x_in /= 10;
}
void degistir2(int & x_in, int & y_in){
	int remainder = x_in;
	x_in = y_in;
	y_in = remainder;
}

int Hacim(int x = 1, int x2 = 1, int x3 = 1);

int main() {
	int degisen = 54321;
	do {
		degistir(degisen);
		cout << degisen << endl;
	}while(degisen > 0);
//	----------------------------------------------------------
	int x = 5, y = 10;
	cout << "ilk deðerler x: " << x << " y: " << y << endl;
	degistir2(x,y);
	cout << "son deðerler x: " << x << " y: " << y << endl;
//	----------------------------------------------------------
	cout << Hacim() << endl;
	cout << Hacim(5) << endl;
	cout << Hacim(5,10) << endl;
	cout << Hacim(5,10,2) << endl;

	return 0;
}

int Hacim(int boy, int en, int derinlik){
	cout << "Boy: " << boy << " en: " << en << " derinlik: " << derinlik << endl;
	return boy*en*derinlik;
}
