//============================================================================
// Name        : Lesson3_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Date.h"
using namespace std;
#include "Staff.h"
#include "Academic.h"

int main() {
	Date starting_date(2,4,2022);
	Academic firstperson("CihatKaya", "343436", 0, starting_date, "Prof.Dr.");
	cout << firstperson.to_string() << endl;
	cout << Staff::get_numstaff() << endl;
	return 0;
}
