//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Health.h"

int main() {
	string name, gender;
	int age, height, weight;
	cout << "Enter your name and gender: ";
	cin >> name >> gender;
	cout << "Enter your age, height and weight: ";
	cin >> age >> height >> weight;
	Health personal(name, gender, age, height, weight);
	personal.inf_about_user();

	return 0;
}
