//============================================================================
// Name        : Fonksiyon.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void kareyaz(double x){
	cout << "double: " << x*x << endl;
}
void kareyaz(int x){
	cout << "int: " << x*x << endl;
}

int main() {
	kareyaz(5);
		kareyaz(5.5);

	return 0;
}
