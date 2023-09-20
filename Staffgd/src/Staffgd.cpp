//============================================================================
// Name        : Staffgd.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Date.h"
#include "Staff.h"
#include "Administrative.h"
#include "AcademicStaff.h"

using namespace std;

int main() {
	int choice, day, month, year;
	string name, title, department, TC;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "Enter type of staff to add: 0-Exit, 1-Academic, 2-Administrative " << endl;
		cin >> choice;
		if (choice == 1){
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter TC ID:";
			cin >> TC;
			cout << "Enter title: ";
			cin >> title;
			cout << "Enter day, month and year: ";
			cin >> day >> month >> year;
			Date academicdate(day, month, year);
			AcademicStaff academicperson(name,TC,academicdate,title);
			cout << "Record create for Academic Person." << endl;
			cout << academicperson.to_string() << endl;
		}else if (choice == 2){
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter TC ID:";
			cin >> TC;
			cout << "Enter Department: ";
			cin >> department;
			cout << "Enter day, month and year: ";
			cin >> day >> month >> year;
			Date administrativedate(day, month, year);
			Administrative administrativeperson(name,TC,administrativedate,department);
			cout << "Record create for Administrative Person." << endl;
			cout << administrativeperson.to_string() << endl;
		}
	}while(choice != 0);
	cout << "Total Staff Entered: " << Staff::get_numstaff() << endl;
	return 0;
}
