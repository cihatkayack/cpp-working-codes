//============================================================================
// Name        : Lecture2_ex_mine.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "mine.h"


int main() {
	rude_responder();
	print_line(40);

	print_stars(9, 30);
	print_line(40);

	int sum = sum_of_range(1, 10);
	cout << "Sum of these range is: " << sum << endl;
	print_line(40);

	int number;
	cout << "Enter a number: ";
	cin >> number;
	bool bool_value = prime_number(number);
	if (bool_value == true) {
		cout << "Number is prime" << endl;
	}else {
		cout << "Number is not prime" << endl;
	}
	print_line(40);

	check_prime_number(1, 100);
	print_line(40);

	int obeb =  gcd(100, 24);
	cout << "GCD: " << obeb << endl;
	print_line(40);

	find_root(400);
	return 0;
}











