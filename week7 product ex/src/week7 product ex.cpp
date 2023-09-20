//============================================================================
// Name        : week7.cpp
// Author      : 
// Version     : 7.5
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Product.h"
#include "Packaged.h"
#include "Unpacked.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	vector <Packaged> productP;
	vector <Unpacked> productU;
	ifstream filereader;
	string line;
	filereader.open("stok.txt");
	if(filereader){
		while(getline(filereader, line)){
			vector <string> productData;
			stringstream ss(line);
			string data;
			while(ss >> data){
				productData.push_back(data);
			}
			if(productData[0] == "Paketli"){
				Packaged stok1(productData[1], productData[2],productData[3],stod(productData[4]), stoi(productData[5]));
				productP.push_back(stok1);
			}else if(productData[0] == "Paketsiz"){
				Unpacked stok2(productData[1], productData[2],productData[3],stod(productData[4]), stoi(productData[5]));
				productU.push_back(stok2);
			}
			productData.clear();
		}
		filereader.close();
	}else{
		cerr << "ERROR" << endl;
	}

	cout << "Number of total product: " << Product::numProduct << endl;
	cout << "Product of Paketli: "  << endl;
	cout << "-------------------------" << endl;
	for(unsigned int i = 0; i < productP.size();i++){
		cout << productP[i].to_string() << endl;
	}
	cout << "Total price: " << Packaged::totalPrice << endl;
	cout << "Product of Paketsiz: " << endl;
	cout << "-------------------------" << endl;
	for(unsigned int i = 0; i < productU.size();i++){
		cout << productU[i].to_string() << endl;
	}
	cout << "-------------------------" << endl;
	cout << "General Total price: " << Packaged::totalPrice + Unpacked::totalPrice << endl;
	return 0;
}
