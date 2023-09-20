#include "tools.h"

void print_date() {
    time_t tmNow = time(0);
    char *dt = ctime(&tmNow);
    cout<<"Current Date/Time: "<<dt << endl;
}

bool is_palindrom(int number) {
	int new_value = 0, count, remainder;
	remainder = number;
	do {
		count = number % 10;
		new_value = (new_value + count) * 10;
		number = number / 10;
	}while (number > 0);
	if (new_value / 10 == remainder) {
		return true;
	}
	return false;
}

void LCD(int num1, int num2) {
	int product1 = 1;
	for (int i = 1; i > 0; i++) {
		product1 = num2 * i;
		if (product1 % num1 == 0) {
			cout << "LCD(" << num1 << ", " << num2 << "): " << product1 << endl;
			break;
		}
	}

}

void sum_1_to_n(int num) {
	int total = 0;
	for (int i = 1; i <= num; i++) {
		total += i;
	}
	if (num > 4) {
		cout << "1 + 2 + 3 + ... + " << num << ": " << total << endl;
	}else {
		for (int i = 1; i <= 4; i++) {
			if (i < num) {
				cout << i << " + ";
			}else {
				cout << i << ": " << total << endl;
			}
		}
	}

}


void print_box(int row, int cols) {
	for (int i = 1 ; i <= row; i++) {
		for (int j = 1; j <= cols; j++) {
			if (i == 1 or i == row) {
				cout << "*";
			}else if (j == 1 or j == (cols)) {
				cout << "*";
			}else if (j != 2 or j != (cols - 1)) {
				cout << " ";
			}

		}
		cout << endl;
	}
}
