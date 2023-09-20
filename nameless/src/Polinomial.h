/*
 * Polinomial.h
 *
 *  Created on: Jun 26, 2022
 *      Author: win10
 */

#ifndef POLINOMIAL_H_
#define POLINOMIAL_H_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cmath>

class Polinomial {
public:
	Polinomial(int);
	void takekatsayilar(int);
	std::string to_string();
	double hesapla(int);
private:
	int derece;
	std::vector<int> katsayilar;
};

#endif /* POLINOMIAL_H_ */
