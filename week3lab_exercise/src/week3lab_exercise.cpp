//============================================================================
// Name        : week3lab_exercise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "tools.h"

int main() {
	print_date();
	int number;
	cout << "Enter a number for polindrom: ";
	cin >> number;
	if (is_palindrom(number)){
		cout << number << " is polindrom" << endl;
	}else {
		cout << number << " is not polindrom" << endl;
	}
	int low, high;
	cout << "Enter low and high number: ";
	cin >> low >> high;
	LCD(low, high);

	int sum_num;
	cout << "Enter a number for sum 1 to n: ";
	cin >> sum_num;
	sum_1_to_n(sum_num);

	int row, cols;
	cout << "Enter row and cols: ";
	cin >> row >> cols;
	print_box(row, cols);
	return 0;
}
