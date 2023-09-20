//============================================================================
// Name        : Tribonacci.cpp
// Author      : 
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
	int index = 10, MaxSteps = 30000, current = 1, numFound = 0;
	while(index > numFound){
		int tri1 = 1;
		int tri2 = 1;
		int tri3 = 1;
		int temp;
		current += 2;
		int count = 0;
		for (int step = 0; step <= MaxSteps; step++){
		  long triNext = tri3;
		  cout << triNext << endl;
		  triNext %= current;
		  if (triNext == 0){
			  count++;
			  break;
		  }
		  temp = tri3;
		  tri3 = tri1 + tri2 + tri3;
		  tri1 = tri2;
		  tri2 = temp;
		}

		if (count == 0){
		  numFound++;
//		  cout << current << endl;
		  filewriter << current << endl;
		}
		if(current == 301){
			break;
		}
	}
	filewriter.close();
	cout << current << " " << numFound;
	return 0;
}

