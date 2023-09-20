//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Flight.h"
#include "Time.h"
#include "InternationalFlight.h"
#include "NationalFlight.h"
using namespace std;

int main() {
	Time first(10,50);
	NationalFlight furkan("Ordu", "Ýzmir", "TK232", first, first);
	cout << furkan.to_string() << endl;
	InternationalFlight cihat("Ordu", "Ýzmir", "TK232", first, "Türkiye", "Yunanistan");
	cout << cihat.to_string() << endl;
	cout << Flight::get_flight_num() << endl;
	return 0;
}
