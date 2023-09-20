//============================================================================
// Name        : Largest.cpp
// Author      : Cihat Kaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
#include <iomanip>
using namespace std;

void CreateBaseExponent(string filename, vector <double> &base, vector <double> &exponent){
	string line;
	ifstream filereader;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			vector <double> linesvalue;
			stringstream ss(line);
			string value;
			while(getline(ss, value, ',')){
				linesvalue.push_back(stoi(value));
			}
			base.push_back(linesvalue[0]);
			exponent.push_back(linesvalue[1]);
			linesvalue.clear();
		}
		filereader.close();
	}else{
		cerr << "ERROR" << endl;
	}
}

void printVector(vector <double> VectorName){
	for(unsigned int i = 0; i < VectorName.size() ;i++){
		cout << VectorName[i] << endl;
	}
}

void CalculateExponentialNumber(vector <double> &basexpResult,vector <double> base,vector <double> exponent){
	for(unsigned int valueInd = 0; valueInd < base.size(); valueInd++){
		double temp = 0;
		temp = exponent[valueInd] * log(base[valueInd]);
		basexpResult.push_back(temp);
	}
}

vector <double> FindLargestExp(vector <double> basexpResult){
	vector <double> maxValue_maxInd;
	double max = 0, max_ind = 0;
	for(unsigned int i = 0; i < basexpResult.size();i++){
		if(basexpResult[i] > max){
			max = basexpResult[i];
			max_ind = i;
		}
	}
	maxValue_maxInd.push_back(max);
	maxValue_maxInd.push_back(max_ind);
	return maxValue_maxInd;
}

void WriteFile(vector <double> basexpResult, vector <double> largestValue_Ind){
	ofstream filewriter;
	filewriter.open("base_exp_result.txt");
	filewriter << "largest exponential line index : " << largestValue_Ind[1]+1 <<
			"\n" << "largest exponential value : " << fixed << setprecision(2)
			<< largestValue_Ind[0] << endl << endl;
	filewriter << "line" << "\t" << "value" << endl;
	for(unsigned int i = 0; i < basexpResult.size();i++){
		filewriter << fixed << setprecision(2) <<i + 1 << "\t\t" << basexpResult[i] << endl;
	}
	filewriter.close();
}

int main() {
	vector <double> base, exponent, basexpResult, largestValue_Ind;
	CreateBaseExponent("p099_base_exp.txt", base, exponent);
	CalculateExponentialNumber(basexpResult, base, exponent);
	largestValue_Ind = FindLargestExp(basexpResult);
	WriteFile(basexpResult,largestValue_Ind);
	return 0;
}






























