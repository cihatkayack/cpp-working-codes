/*
 * Polinom.h
 *
 *  Created on: Jun 27, 2022
 *      Author: win10
 */

#ifndef POLINOM_H_
#define POLINOM_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>

class Polinom {
public:
	Polinom(double);
	void takekatsayilar(int);
	double hesaplama(double);
	std::string to_string();
private:
	double derece;
	std::vector<int> katsayilar;
};

#endif /* POLINOM_H_ */
