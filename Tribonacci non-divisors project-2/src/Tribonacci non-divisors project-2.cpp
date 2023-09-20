//============================================================================
// Name        : Tribonacci.cpp
// Author      : Cihat Kaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream filewriter;
	filewriter.open("Tribonacci-non-divisors.txt");
	int index = 124, MaxSteps = 30000, current = 1, numFound = 0;

	while(index > numFound){
		int tri1 = 1;
		int tri2 = 1;
		int tri3 = 1;
		current += 2;
		int count = 0;
		for (int step = 0; step <= MaxSteps; step++){
		  int triNext = tri1 + tri2 + tri3;
		  triNext %= current;
		  if (triNext == 0){
			  count++;
			  break;
		  }

		  tri1 = tri2;
		  tri2 = tri3;
		  tri3 = triNext;
		}

		if (count == 0){
		  numFound++;
		  filewriter << current << endl;
		}
	}
	filewriter.close();
	cout << current << " " << numFound;
	return 0;
}
