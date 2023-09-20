//============================================================================
// Name        : Invoiceeee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Invoice.h"
using namespace std;

int main() {
	Invoice stuff(123445, "cihat", 20, 100);
	cout << stuff.to_string() << endl;
	cout <<"Amount: " << stuff.InvoiceAmount() << endl;

	return 0;
}
