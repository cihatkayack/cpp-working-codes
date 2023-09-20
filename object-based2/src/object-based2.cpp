//============================================================================
// Name        : object-based2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class NotTablosu{
public:
	void mesajYazdir(string ders_ismi) const {
		cout << "not tablasu: " << ders_ismi << endl;
	}
};

int main() {
	NotTablosu cppdersnotlari;
	cppdersnotlari.mesajYazdir("CPP");
	return 0;
}
