#include "mine.h"

void rude_responder() {
	cout << "I dont't work at the info desk, go ask someone else" << endl;
}

void print_line(int number_of_line) {
	for (int count = 0; count < number_of_line; count++){
		cout << "-";
	}
	cout << endl;
}

void print_stars(int rows, int cols) {
	for (int count = 0; count < rows; count++) {
		for (int count2 = 0; count2 < cols; count2++) {
			cout << "*";
		}
		cout << endl;
	}
}

int sum_of_range(int num1, int num2) {
	int total = 0;
	int high_value, low_value;
	if (num1 > num2) {
		high_value = num1;
		low_value = num2;
	}else if (num1 < num2) {
		high_value = num2;
		low_value = num1;
	}else {
		high_value = num2;
		low_value = num1;
	}
	for (int count = low_value; count <= high_value; count++) {
		total += count;
	}
	return total;
}

bool prime_number(int number) {
	for(int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

void check_prime_number(int low, int high) {
	for (int count = low; count <= high; count++) {
		if (prime_number(count)) {
			cout << count << " ";
		}
	}
	cout << endl;
}

int gcd(int num1, int num2) {
	if (num1 == num2) {
		return num1;
	}else if (num2 > num1) {
		int keep_num1 = num1; num1 = num2; num2 = keep_num1;
	}
	int dividing;
	do {
		dividing = num1 % num2;
		cout << "GCD(" << num1 << ", " << num2 << ") = " << num1 << " % " << num2 << "= " << dividing << endl;
		num1 = num2;
		num2 = dividing;
	}while(num2 != 0);
	return num1;
}


double find_root(double a) {
	double root_n = a;
	do {
		cout << "root: " << root_n << endl;
		root_n = (root_n + a / root_n) / 2;
	}while (fabs(root_n * root_n - a) > (a / 10000));
	return root_n;
}
























