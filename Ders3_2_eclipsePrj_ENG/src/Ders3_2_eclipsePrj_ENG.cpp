#include <iostream>
#include <string>
#include "Date.h"
#include "Staff.h"
#include "AcademicStaff.h"
#include "AdministrativeStaff.h"
using namespace std;
Date read_date(){
	unsigned int day, month, year;
	cout << "Enter day, month and year:" << endl;
	cin >> day >> month >> year;
	Date new_date(day, month, year);
	return new_date;
}

AcademicStaff create_academic_staff(){
	string name, TC, title;
	cout << "Reading academic staff info:" << endl;
	cout << "Enter name:";
	cin >> name;
	cout << "Enter TC ID:" << endl;
	cin >> TC;
	cout << "Enter title:" << endl;
	cin >> title;

	Date date = read_date();
	AcademicStaff new_staff(name, TC, date, title);
	return new_staff;
}

AdministrativeStaff create_admin_staff(){
	string name, TC, department;
	cout << "Reading administrative staff info:" << endl;
	cout << "Enter name:";
	cin >> name;
	cout << "Enter TC ID:" << endl;
	cin >> TC;
	cout << "Enter department:" << endl;
	cin >> department;

	Date date = read_date();
	AdministrativeStaff new_staff(name, TC, date, department);
	return new_staff;
}
int main() {
	int choice;
	do {
		cout << "Enter type of staff to add: 0-Exit, 1-Academic, 2-Administrative " << endl;
		cin >> choice;

		if (choice == 1){
			AcademicStaff new_staff = create_academic_staff();
			cout << "Record created for: " << endl << new_staff.to_string() << endl;
		} else if (choice == 2){
			AdministrativeStaff new_staff = create_admin_staff();
			cout << "Record created for: " << endl << new_staff.to_string() << endl;
		} else {
			if (choice != 0)
				cout << "Choice should be 0,1 or 2." << endl;
		}

	} while(choice != 0);
	cout << "Number of staff added: " << Staff::get_num_staff() << endl;

	return 0;
}
