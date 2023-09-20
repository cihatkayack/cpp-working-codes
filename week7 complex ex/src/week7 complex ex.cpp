//============================================================================
// Name        : week7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Complex.h"
using namespace std;

int main() {
	Complex c1(2,1), c2(4,7);
	int number = Complex::numComplex;
	Complex total = c1 + c2;
	Complex average = total / number;
	cout << average.to_string() << endl;
	return 0;
}
