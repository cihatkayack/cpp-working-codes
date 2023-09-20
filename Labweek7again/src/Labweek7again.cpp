//============================================================================
// Name        : bk.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "tools.h"
#define LEN 20
using namespace std;
int main() {
	int T0 = 7;
	int x[LEN], y[LEN];
	createImpTrain(x, LEN, T0);
	createImpTrain_ptr(y, LEN, T0);
	printArray(x, LEN);
	printArray(y, LEN);


	double vect1[]={-3,4}, vect2[] = {3, 4}, vect3[] = {1,0,0};
	cout << "L1-norm(vect1) = " << pNorm(vect1, 2, 1) << endl;
	cout << "L2-norm(vect1) = " << pNorm(vect1, 2, 2) << endl;
	cout << "L1-norm(vect2) = " << pNorm(vect2, 2, 1) << endl;
	cout << "L2-norm(vect2) = " << pNorm(vect2, 2, 2) << endl;
	cout << "L1-norm(vect3) = " << pNorm(vect3, 3, 1) << endl;
	cout << "L2-norm(vect3) = " << pNorm(vect3, 3, 2) << endl;


	double vect[] = {5,6,9,10,11,23};
	int len = 6;
	normalization(vect,len);

	return 0;
}
