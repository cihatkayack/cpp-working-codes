//============================================================================
// Name        : Lab10.cpp
// Author      : Cihat Kaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Point2D.h"
using namespace std;

void readMidPoints(string, vector<Point2D> &);
void printMaxDistantMidPoint(vector<Point2D>);
int main() {
	vector<Point2D> midpoints;
	readMidPoints("p102_triangles.txt", midpoints);
	printMaxDistantMidPoint(midpoints);
return 0;
}

void readMidPoints(string filename, vector<Point2D> & midpoints){
	ifstream filereader;
	string line;
	filereader.open(filename);
	if(filereader){
		while(getline(filereader, line)){
			vector <double> points;
			stringstream ss(line);
			string data;
			while(getline(ss,data,',')){
				points.push_back(stod(data));
			}
			Point2D first(points[0] ,points[1]);
			Point2D second(points[2] ,points[3]);
			Point2D third(points[4] ,points[5]);
			Point2D total = first + second + third;
			Point2D average = total / 3;
			midpoints.push_back(average);
			points.clear();
		}
		filereader.close();
	}else{
		cerr << "ERROR" << endl;
	}
}

void printMaxDistantMidPoint(vector<Point2D> midpoints){
	int maxInd = 0;
	Point2D maxValue = midpoints[0];
	for(unsigned int i = 0; i < midpoints.size();i++){
		if(midpoints[i] > maxValue){
			maxInd = i;
			maxValue = midpoints[i];
		}
	}
	string str_out;
	str_out = "[" + to_string(midpoints[maxInd].get_x()) + "," +
			to_string(midpoints[maxInd].get_y()) + "]";
	cout << "Max distant midpoint: " << str_out << "\nOn line number: " << maxInd+1 << endl;
}










