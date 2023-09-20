//============================================================================
// Name        : Class.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Employee.h"

int main() {
	Employee employee1("Cihat", "Kaya", 100);
	Employee employee2("Furkan", "Kaya", 1000);
	employee1.display_inf();
	employee2.display_inf();
	employee1.raise_salary();
	employee2.raise_salary();
	return 0;
}
