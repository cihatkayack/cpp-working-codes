//============================================================================
// Name        : aetae.cpp
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

#include "tools.h"

#define LEN 20
using namespace std;
int main() {
	int T0 = 5;
	int x[LEN], y[LEN];
	createImpTrain(x, LEN, T0);
//	createImpTrain_ptr(y, LEN, T0);
	printArray(x, LEN);
	printArray(y, LEN);
	return 0;
}
