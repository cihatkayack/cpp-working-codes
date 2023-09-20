//============================================================================
// Name        : Health.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Health.h"
#include "Operations.h"
using namespace std;

int main() {
	Health person1("Kürþat", "Kaya", "Erkek", 19, 7, 2008, 163, 55);
	cout << to_string(person1) << endl;

	return 0;
}
