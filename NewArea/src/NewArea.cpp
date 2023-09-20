//============================================================================
// Name        : NewArea.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Polinom.h"
using namespace std;

int main() {
	int derece;
	cout << "Polinomun derecesini giriniz: "; cin >> derece;
	Polinom p(derece);
	cout << "3. derece polinom katsayilarini sirayla giriniz:" << endl;
	for(int i = 0; i < derece+1; i++){
		int deger;
		cout << "x^" << i << " terimi katsayisini giriniz: ";cin >> deger;
		p.takekatsayilar(deger);
	}
	cout << p.to_string() << endl;
	double x;
	cout << "x degerini giriniz: ";cin >> x;
	cout << p.hesaplama(x) << endl;
	return 0;
}
