//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Data.h"

int main() {
	int day, month, year;
	cout << "Please enter month, day, year: ";
	cin >> month >> day >> year;
	Data dates(month, day, year);
	dates.display_date();
	return 0;
}
