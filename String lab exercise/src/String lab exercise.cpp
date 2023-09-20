//============================================================================
// Name        : String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "Address.h"
using namespace std;
#include <vector>

int main() {
	vector<Address> adresses;
	string names, cities, postalcodes;
	int choice;
	cout << "Enter your choice: 1-Add new address, 0-Exit: "; cin >> choice;
	while (choice != 0){
		Address newaddress(names, cities, postalcodes);
		do{
			cout << "Enter name (no digits please): ";
			cin >> names;
			newaddress.set_name(names);
		}while(newaddress.get_name() == "");
		do{
			cout << "Enter city (no digits please): ";
			cin >> cities;
			newaddress.set_city(cities);
		}while(newaddress.get_city() == "");
		do{
			cout << "Enter postalCode (all digits please): ";
			cin >> postalcodes;
			newaddress.set_postalcode(postalcodes);
		}while(newaddress.get_postalcode() == "");
		adresses.push_back(newaddress);
		cout << "Enter your choice: 1-Add new address, 0-Exit: "; cin >> choice;
	}
	cout << Address::get_numofadress() << " addresses created, printing them:" << endl;

	for(Address address: adresses){
			cout << "-------------------------" << endl;
			cout << address.to_string() << endl;
		}
	return 0;
}




























