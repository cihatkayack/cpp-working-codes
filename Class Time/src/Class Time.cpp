//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Time.h"

int main() {
	int hour, minute, second;
	cout << "Please enter hour, minute and second: ";
	cin >> hour >> minute >> second;
	Time time;
	time.set_hour(hour);
	time.set_minute(minute);
	time.set_second(second);
	time.display_time();
	return 0;
}
