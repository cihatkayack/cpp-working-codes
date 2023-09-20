//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Car.h"
using namespace std;

int main() {
	Car car1(300, "Renault-Laguna", "Black", 5, 290);
	cout << car1.to_string() << endl;
	return 0;
}
