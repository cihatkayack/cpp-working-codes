//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Invoice.h"

int main() {
	Invoice invoice1("12345", "Hammer", -12, 6);
	cout << "Part Number: " << invoice1.get_partnumber() << endl;
	cout << "Description: " << invoice1.get_description() << endl;
	cout << invoice1.get_quantity() << " x " << invoice1.get_price() << ": ";
	cout << invoice1.multiplyes() << endl;
	return 0;
}
