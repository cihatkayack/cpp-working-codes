//============================================================================
// Name        : Date.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Time.h"
using namespace std;

int main() {
	Time mealtime(14, 45, 24);
	cout << mealtime.to_string() << endl;
	return 0;
}
