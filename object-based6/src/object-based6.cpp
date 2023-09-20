//============================================================================
// Name        : object-based6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "kompleks.h"
using namespace std;

kompleks topla(kompleks k1, kompleks k2){
	kompleks t(k1.getReel()+k2.getReel(), k1.getImajiner()+k2.getImajiner());
	return t;
}


int main() {
	kompleks c1(3,4), c2(-1,5);
	kompleks c3;

	c1.yazdir();
	c2.yazdir();
	c3.yazdir();
	kompleks toplam = topla(c1, c2);
	cout << "Toplam= ";
	toplam.yazdir();
	return 0;
}
