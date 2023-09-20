//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "HeartRates.h"

int main() {
	string fname, lname;
	int day, month, year;
	cout << "Please enter your f and l name: ";
	cin >> fname >> lname;
	cout << "Please enter you date of birth with day, month, year";
	cin >> day >> month >> year;
	HeartRates personal(fname, lname, day, month, year);
	cout << personal.get_age() << endl;
	cout << personal.getmaxheart() << endl;
	personal.gettargetrate();
	return 0;
}
