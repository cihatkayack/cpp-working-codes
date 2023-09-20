//============================================================================
// Name        : Median.cpp
// Author      : Cihat Kaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void printVector(vector <double> VectorName){
	for(unsigned int i = 0; i < VectorName.size(); i++){
		cout << VectorName[i] << " ";
	}
	cout << endl;
}

void dividebysignal(vector <double> &signalInline, string line){
	stringstream ss(line);
	double value;
	while(ss >> value){
		signalInline.push_back(value);
	}
}

double selectionsort(vector <double> &medianValues, int len){
	double middlepoint;
	sort(medianValues.begin(), medianValues.end());
	middlepoint = medianValues[len/2];
	return middlepoint;
}

void medianfilter(vector <double> &signal, int RANGE){
	vector <double> medianValues;
	for(unsigned int i = RANGE; i < signal.size(); i++){
		for(unsigned int Ind = i - RANGE; Ind < i + RANGE + 1;Ind++){
			medianValues.push_back(signal[Ind]);
		}
//		printVector(medianValues);
		double middlepoint = selectionsort(medianValues, medianValues.size());
//		printVector(medianValues);
		medianValues.clear();
		signal[i] = middlepoint;
	}
}

void writeNewSignalFile(vector <double>signal1, vector <double> signal2, vector <double> signal3, vector <double>signal4){
	ofstream filewriter;
	filewriter.open("sig4ChannelWithMedianFilter.txt");
	for(unsigned int i = 0; i < signal1.size(); i++){
		filewriter << signal1[i] << "\t" << signal2[i] << "\t" << signal3[i] << "\t" << signal4[i] << endl;
	}
	filewriter.close();
}

int main() {
	const int RANGE = 2;
	ifstream filereader;
	string line;
	vector <double> signal1, signal2, signal3, signal4;
	filereader.open("sig4Channel.txt");
	if(filereader){
		while(getline(filereader, line)){
			vector <double> signalInline;
			dividebysignal(signalInline, line);
			signal1.push_back(signalInline[0]);
			signal2.push_back(signalInline[1]);
			signal3.push_back(signalInline[2]);
			signal4.push_back(signalInline[3]);
			signalInline.clear();
		}
		filereader.close();
	}else{
		cerr << "ERROR" << endl;
	}
	medianfilter(signal1, RANGE);
	medianfilter(signal2, RANGE);
	medianfilter(signal3, RANGE);
	medianfilter(signal4, RANGE);
	writeNewSignalFile(signal1,signal2,signal3,signal4);
	return 0;
}



















