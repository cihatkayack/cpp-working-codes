//============================================================================
// Name        : The.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

vector <int> primeNumbers(){
	vector <int> numbers;
	for(int i = 2; i < 10;i++){
		int count = 0;
		for(int j = 2; j <= i; j++){
			if(i % j == 0){
				count++;
			}
		}
		if(count == 1){
			numbers.push_back(i);
		}
	}
	return numbers;
}

void printVector(vector <int> vectorname){
	for(unsigned int i = 0; i < vectorname.size(); i++){
		cout << vectorname[i] << endl;
	}
}

//int factorialofnumerator(int number, int number2){
//	count
//	while(true){
//
//	}
//	return 0;
//}
//
//int factorialofdenominator(int number){
//	return 0;
//}

int main() {
	vector <int> PrimeNumbers;
	PrimeNumbers = primeNumbers();
	printVector(PrimeNumbers);
	return 0;
}






























