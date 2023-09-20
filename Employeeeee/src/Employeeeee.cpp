//============================================================================
// Name        : Employeeeee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Employe.h"
using namespace std;

int main() {
	Employe person1("cihat", "kaya", 1000);
	Employe person2("furkan", "kaya", 10000);
	cout << person1.to_stringmaas() << endl;
	person1.give_raise();
	cout << person1.to_stringmaas() << endl;
	cout << person2.to_stringmaas() << endl;
	person2.give_raise();
	cout << person2.to_stringmaas() << endl;

	return 0;
}
