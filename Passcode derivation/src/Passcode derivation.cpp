//============================================================================
// Name        : Passcode.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
#include <iomanip>
using namespace std;

void Filereader(string,vector <int> &,vector <int> &,vector <int> &);
void CountingFunc(vector<int>, int []);
void Compare(int [], int [], int []);
bool IsexistInVector(vector<int>, int);
void printVector(vector <int>);
void printArray(int []);

int main() {
	vector <int> digit1,digit2,digit3;
	int histogram1[10] = {0,0,0,0,0,0,0,0,0,0};
	int histogram2[10] = {0,0,0,0,0,0,0,0,0,0};
	int histogram3[10] = {0,0,0,0,0,0,0,0,0,0};
	Filereader("p079_keylog.txt",digit1,digit2,digit3);
	CountingFunc(digit1, histogram1);
	CountingFunc(digit2, histogram2);
	CountingFunc(digit3, histogram3);
	Compare(histogram1,histogram2,histogram3);
	return 0;
}

void Compare(int hist1[], int hist2[], int hist3[]){
	vector<int> index;
	cout << "Passcode: ";
	for(int i = 9; i > -1; i--){
		if(hist1[i] != 0 or hist2[i] != 0 or hist3[i] != 0){
			if(hist1[i] > hist2[i] and hist1[i] > hist3[i]){
				index.push_back(i);
				cout << i;
			}
		}
	}
	for(int i = 9; i > -1; i--){
		if(hist1[i] != 0 or hist2[i] != 0 or hist3[i] != 0){
			if(!IsexistInVector(index, i)){
				if(hist2[i] > hist3[i]){
					index.push_back(i);
					cout << i;
				}
			}
		}
	}
	for(int i = 9; i > -1; i--){
		if(hist1[i] != 0 or hist2[i] != 0 or hist3[i] != 0){
			if(!IsexistInVector(index, i)){
				cout << i;
			}
		}
	}
	cout << endl;
}

bool IsexistInVector(vector<int> index, int number){
	bool result = false;
	for (auto & x : index)
	{
		if (x == number)
		{
			result = true;
			break;
		}
	}
	return result;
}

void CountingFunc(vector<int> digit, int histogram[]){
	for(unsigned int i = 0; i < digit.size(); i++){
		histogram[digit[i]] += 1;
	}
}

void Filereader(string filename,vector <int> &digit1,vector <int> &digit2,vector <int> &digit3){
	fstream filereader;
	string line;
	filereader.open(filename);
	if(filereader){
		while(true){
			filereader >> line;
			digit1.push_back(((int)line[0]) - ((int)'0'));
			digit2.push_back(((int)line[1]) - ((int)'0'));
			digit3.push_back(((int)line[2]) - ((int)'0'));
			if(!filereader){break;}
		}
	}else{
		cerr << "ERROR" << endl;
	}
	filereader.close();
}



void printVector(vector <int> Vectorname){
	for(unsigned int i = 0; i<Vectorname.size()-1;i++){
		cout << Vectorname[i] << endl;
	}
}


void printArray(int x[]){
	for(unsigned int i = 0; i < 10; i++){
		cout << x[i] << endl;
	}
}















