//============================================================================
// Name        : Lecture2_examples.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "tools.h"




int main() {
	rude_responder();
	print_line(40);

	print_stars(6, 20);
	print_line(40);

	int sum = sum_in_range(10, 20);
	cout << "Sum of all ints in range[10,20]: " << sum << endl;
	print_line(40);

	int input_int;
	cout << "Input an integer: ";
	cin >> input_int;
	if (isprime(input_int)) {
		cout << "Value is prime" << endl;
	}else {
		cout << "Value is not prime" << endl;
	}
	print_line(40);

	int low_limit, high_limit;
	cout << "Input limits: ";
	cin >> low_limit >> high_limit;
	cout << "All prime numbers in range [" << low_limit << "," << high_limit << "]: " << endl;
	print_prime_in_range(low_limit, high_limit);
	print_line(40);

	int num1, num2;
	cout << "Input two integers: ";
	cin >> num1 >> num2;
	int obeb = gcd(num1, num2);
	cout << "GCD = " << obeb << endl;
	print_line(40);

	double a;
	cout << "Input the value for which you want to compute the root: " << endl;
	cin >> a;
	cout << "sgrt(" << a << ") = " << find_root(a) << endl;
	return 0;
}





