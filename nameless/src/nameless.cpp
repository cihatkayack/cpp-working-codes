//============================================================================
// Name        : nameless.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;

void printVector(vector <int> Vector){
	for(unsigned int i = 0; i < Vector.size();i++){
		cout << Vector[i] << endl;
	}
	cout << endl;
}
void printVector(vector <string> Vector){
	for(unsigned int i = 0; i < Vector.size();i++){
		cout << Vector[i] << endl;
	}
	cout << endl;
}

void printVector(vector <double> Vector){
	for(unsigned int i = 0; i < Vector.size();i++){
		cout << Vector[i] << endl;
	}
	cout << endl;
}

#include "Polinomial.h"

void question1(){
	vector <int> exponential;
	int derece, katsayilar, xDeger;
	cout << "Polinomun derecesini giriniz: ";cin >> derece;
	Polinomial p(derece);
	for(int i = 0;i < derece+1;i++){
		cout << "x^" << i <<" terimi katsayisini giriniz: "; cin >> katsayilar;
		p.takekatsayilar(katsayilar);
		exponential.push_back(katsayilar);
	}
	cout << p.to_string() << endl;
	cout << "x degeri giriniz"; cin >> xDeger;
	cout << "p(x) = " << p.hesapla(xDeger);
}

void filewri(vector<double> tepenokta,vector<int> tepenoktaInd, vector<double>line1){
	ofstream filewriter;
	filewriter.open("result.txt");
	filewriter << "Endeks" << "\t" << "onceki" << "\t" << "tepedeger" << "\t" << "sonraki" << endl;
	for(unsigned int i = 0; i < tepenokta.size(); i++){
		filewriter << tepenoktaInd[i] << "\t" << line1[tepenoktaInd[i]-1] <<
				"\t" << line1[tepenoktaInd[i]] << "\t" << line1[tepenoktaInd[i]+1] << endl;
	}
	filewriter.close();
}

void question2(){
	fstream filereader;
	string line;
	vector <double> line1;
	filereader.open("100_120.txt");
	if(filereader){
		while(getline(filereader, line)){
			stringstream ss(line);
			string data;
			vector <double> values;
			while(ss >> data){
				values.push_back(stod(data));
			}
			line1.push_back(values[0]);
			values.clear();
		}
		filereader.close();
	}
	vector <double> tepenokta;
	vector <int> tepenoktaInd;
	for(unsigned int i = 1; i < line1.size() - 1;i++){
		if(line1[i] > line1[i+1] && line1[i] > line1[i-1]){
			tepenokta.push_back(line1[i]);
			tepenoktaInd.push_back(i);
		}
	}
	filewri(tepenokta,tepenoktaInd, line1);

}

void matrixquestion(){
	vector <int> matrixvalues;
	int satir,sutun;
	do{
		cout << "Matris için satir sayýsý giriniz: ";cin >> satir;
		cout << "Matris için sütun sayýsý giriniz: ";cin >> sutun;
		if(satir!= sutun){
			cout << "Matrisin satir ve sütun sayýsý eþit olmalý, tekrar giris yapiniz:" << endl;
		}
	}while(satir != sutun);
	int values;
	for(int i = 0; i < satir; i++){
		for(int j = 0; j < sutun;j++){
			cout << "a[" << i << "," << j << "]" << " = ?";cin >> values;
			matrixvalues.push_back(values);
		}
	}

	int zeroCount = 0, indcount = 0;
	for(int i = 0; i < satir; i++){
		for(int j = 0; j < sutun;j++){
			if(i != j){
				if(matrixvalues[indcount] == 0){
					zeroCount++;
				}
			}
			indcount++;

		}
	}
	if(zeroCount == (satir*sutun - satir)){
		cout << "Bu matris köþegen bir matristir" << endl;
	}else{
		cout << "Bu matris köþegen bir matris deðildir" << endl;
	}
}

#include "Address.h"

void stringquestion(){
	vector<Address> adresses;
	string name, city, postalCode;
	Address fakeaddress(name,city, postalCode);
	int choice;
	cout << "Enter your choice: 1-Add new address, 0-Exit: "; cin >> choice;
	while(choice != 0){
		do{
			cout << "Enter name (no digits please): "; cin >> name;
		}while(!fakeaddress.setName(name));
		do{
			cout << "Enter city (no digits please): "; cin >> city;
		}while(!fakeaddress.setCity(city));
		do{
			cout << "Enter postalCode (all digits please): "; cin >> postalCode;
		}while(!fakeaddress.setpostalCode(postalCode));
		Address originaladdress(name, city, postalCode);
		adresses.push_back(originaladdress);
		cout << "Enter your choice: 1-Add new address, 0-Exit: "; cin >> choice;
	}

	cout << Address::numofaddress - 1 << " addresses created, printing them:" << endl;
	for(unsigned int i = 0; i < adresses.size();i++){
		cout << "--------------------------------" << "\n" << adresses[i].to_string() << endl;
	}
}

int main(){
	//	question1();
	//	question2();
	//	matrixquestion();
	//	stringquestion();

	return 0;
}












































