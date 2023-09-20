//============================================================================
// Name        : deneme.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void swap(int x[], int ind1, int ind2){
	int temp = x[ind1];
	x[ind1] = x[ind2], x[ind2] = temp;
}

void selectionSort(int x[], int len){
	for(int i = 0; i < len; i++){
		int min = x[i], ind = i;
		for(int k = i+1; k < len;k++){
			if(x[k] < min){
				min = x[k], ind = k;
			}
		}
		if(ind != i){
			swap(x, ind, i);
		}
	}
}

void printArray(int x[], int len){
	for(int i = 0; i < len; i++){
		cout << x[i] << ",";
	}
}

int main() {
	int arr1[]={9,5,3,4,7,8,5,4,1,2,7,4,5};
	int len=13;
	selectionSort(arr1,len);
	printArray(arr1,len);
	return 0;
}














