//============================================================================
// Name        : milkshake.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

bool IsPrime(int number){
	int count = 0;
	for(int i = 2; i < number;i++){
		if(number % i == 0){
			count++;
		}
	}
	if(count > 0){
		return false;
	}else{
		return true;
	}
}

void printVector(vector <int> Vectorname){
	for(unsigned int VectorInd = 0; VectorInd < Vectorname.size(); VectorInd++){
		cout << Vectorname[VectorInd] << endl;
	}
}


int main() {
	vector <int> primenumber;
	int lastNum = 1000;
	for(int n = 0;n <= lastNum;n++){
		int PRIMEnumber[6] = {n*n + 1, n*n + 3, n*n + 7, n*n + 9, n*n + 13, n*n + 27};
		int NOTPRIMEnumber[8] = {n*n + 5, n*n + 11, n*n + 15, n*n + 17, n*n + 19, n*n + 21, n*n + 23, n*n + 25};
		int count1 = 0;
		for(int i = 0; i < 6; i++){
			if(IsPrime(PRIMEnumber[i])){
				count1++;
			}
		}
		int count2 = 0;
		for(int i = 0; i < 8; i++){
			if(!IsPrime(NOTPRIMEnumber[i])){
				count2++;
			}
		}
		if(count1 == 6 and count2 == 8){
			primenumber.push_back(n);
		}
	}

	int total = 0;
	for(unsigned int VectorInd = 0; VectorInd < primenumber.size(); VectorInd++){
		total += primenumber[VectorInd];
	}

	cout << total << endl;
	return 0;
}















