//============================================================================
// Name        : Calculator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "HybridCalculator.h"
using namespace std;

int main() {
	HybridCalculator calculator(1,2);
	HybridCalculator calculator2(90);
	cout << calculator.to_string_simple() << endl;
	cout << calculator2.to_string_scientific() << endl;
	return 0;
}
