//============================================================================
// Name        : Lib.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <vector>
#include <cmath>

#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
	vector<double> y = {1,3,2,4};
	vector<double> x = {1.5,2.5,3.5,4.5};

	plt::figure();
	plt::plot(x,y,"bo-", {{"label", "data trend"}});
	plt::xlabel("time [s]");
	plt::ylabel("observations [m]");
	plt::title("deneme");
	plt::legend();
	plt::show();
	return 0;
}





























