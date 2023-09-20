//============================================================================
// Name        : week7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Person.h"
#include "Student.h"
#include "Staff.h"
#include <vector>
using namespace std;

int main() {
	vector<Person> persons;
	int choice;
	do{
		string name, TC;
		int age,Class;
		double salary;
		cout << "person-1, student-2, staff-3, EXIT-0: "; cin >> choice;
		if(choice == 1){
			cout << "Name: ";cin >> name;
			cout << "TC: ";cin >> TC;
			cout << "Age: ";cin >> age;
			Person person1(name,TC,age);
			persons.push_back(person1);
		}else if(choice == 2){
			cout << "Name: ";cin >> name;
			cout << "TC: ";cin >> TC;
			cout << "Age: ";cin >> age;
			cout << "Class: ";cin >> Class;
			Student person2(name,TC,age,Class);
			persons.push_back(person2);
		}else if(choice == 3){
			cout << "Name: ";cin >> name;
			cout << "TC: ";cin >> TC;
			cout << "Age: ";cin >> age;
			cout << "Salary: ";cin >> salary;
			Staff person3(name,TC,age,salary);
			persons.push_back(person3);
		}
	}while(choice != 0);
	for(unsigned int i = 0; i < persons.size(); i++){
		cout << persons[i].to_string() << endl;
	}
	return 0;
}
