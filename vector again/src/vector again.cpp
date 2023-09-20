//============================================================================
// Name        : vector.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Vector.h"
#include "operations.h"
using namespace std;

int main() {
	Vector v1(8,3);
	Vector v2(1,10);
	cout << sum(v1,v2).to_string() << endl;
	cout << multiply(v1,v2).to_string() << endl;
	return 0;
}
