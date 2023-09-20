#include "tools.h"

void rude_responder() {
	cout << "I dont't work at the info desk, go ask someone else" << endl;
}

void print_line(int number_dashes)  {
	for(int count = 0; count < number_dashes; count++) {
		cout << "-";
	}
	cout << endl;
}

void print_stars(int num_rows, int num_cols) {
	for(int row_ind = 0; row_ind < num_rows; row_ind++) {
		for (int cols_ind = 0; cols_ind < num_cols; cols_ind++) {
			cout << "*";
		}
		cout << endl;
	}
}

int sum_in_range(int low, int high) {
	int total = 0;
	for (int value = low; value <= high; value++) {
		total += value;
	}
	return total;
}

bool isprime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}



void print_prime_in_range(int low_limit, int high_limit) {
	for (int number = low_limit; number <= high_limit; number++) {
		if (isprime(number)) {
			cout << number << " ";
		}
	}
	cout << endl;
}

int gcd(int num1, int num2) {
	if (num2 > num1) {
		int temp = num1; num1 = num2; num2 = temp;
	}else if (num1 == num2) {
		return num1;
	}
	cout << "GCD(" << num1 << ", " << num2 << ") = ";
	int remainder = num2;
	do {
		remainder = num1 % num2;
		cout << num1 << " % " << num2  << "= " << remainder << endl;
		num1 = num2; num2 = remainder;
	}while(remainder != 0);
	return num1;
}

double find_root(double a) {
	double root_n;
	root_n = a;
	do {
		cout << "root: " << root_n << endl;
		root_n = (root_n + a / root_n) / 2;
	}while(fabs(root_n * root_n - a) > (a / 10000));
	return root_n;
}

















