//============================================================================
// Name        : Algorithm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
	array< int, 5 > dizi = { 1, -2, 3, -4, 5 };
	// Dizinin yazdirilmasi
	cout << "Degisim oncesi: ";
	for ( int eleman : dizi ){
	cout << eleman << " ";
	}
	// Elemanlarin iceriklerinin degistirilmesi
	for ( int &elemanReferansi : dizi ){
	elemanReferansi *= 2;
	}
	// Degisim sonrasi yazdirma
	cout << "\nDegisim sonrasi: ";
	for ( int eleman : dizi ){
	cout << eleman << " ";
	}
	cout << endl;

	sort( dizi.begin(), dizi.end() );
	for(int eleman: dizi){
		cout << eleman << " ";
	}
	cout << endl;

	return 0;
}
