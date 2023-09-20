//============================================================================
// Name        : Labexercise_week2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

void cube_of_number() {
	cout << "Enter a integer to take the cube of this number: ";
	int number;
	cin >> number;
	cout << "Number is: " << number << " and cube of this is : " << number * number * number << endl;
}

void factorial() {
	cout << "Enter a number to get factorial: ";
	int number, product = 1;
	cin >> number;
	for (int count = 1; count <= number; count++) {
		product = product * count;
	}
	cout << "The factorial of " << number << " is: " << product << endl;
}


void root_of_equations() {
	double a, b, c;
	double x1, x2;
	cout << "ax2 + bx + c" << endl;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	x1 = (-b + sqrt(b*b - 4 * a * c )) / 2;
	x2 = (-b - sqrt(b*b - 4 * a * c )) / 2;
	cout << "The roots of this equation: " << x1 << ", " << x2 << endl;
}

void extraction_process() {
	int Ns, number = 1234567 , count = 0, new_number = 0, value;
	cout << "Enter a Ns value: ";
	cin >> Ns;
	value = number;
	while (value > 0) {
		value = value / 10;
		count++;
		new_number = (new_number + Ns) * 10;
	}
	cout << Ns << "s complement of " << number << " is computed by: " << new_number / 10 << " - " << number << ": ";
	cout << new_number / 10 - number << endl;
}

void check_sum_of_even_value() {
	int number, sum = 0;
	cout << "Enter last value of range [1,x): ";
	cin >> number;
	for (int count = 0; count < number; count++) {
		if (count % 2 == 0) {
			sum += count;
		}
	}
	if (sum % 10 == 0) {
		cout << "[1," << number << ") is divisible by 10" << endl;
	}else {
		cout << "[1," << number << ") is not divisible by 10" << endl;
	}
}

void exponential_number_operation() {
	int low_value, high_value, number, product = 1;
	cout << "Enter a low value: ";
	cin >> low_value;
	cout << "Enter a high value: ";
	cin >> high_value;
	cout << "Enter a number to be exponential operation: ";
	cin >> number;
	while (true) {
		product = product * number;
		if (product > high_value) {
			break;
		}
		if (product >= low_value and product <= high_value) {
			cout << product << " ";
		}
	}
	cout << endl;
}


int main() {
	cube_of_number();
	cout << "--------------------------------------" << endl;
	factorial();
	cout << "--------------------------------------" << endl;
	root_of_equations();
	cout << "--------------------------------------" << endl;
	extraction_process();
	cout << "--------------------------------------" << endl;
	check_sum_of_even_value();
	cout << "--------------------------------------" << endl;
	exponential_number_operation();
	cout << "--------------------------------------" << endl;
	return 0;
}























