/*
 * tools.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: win10
 */

#include "tools.h"
#define LEN 20


void createImpTrain(int x[], int len, int T0){
	int count = 0;
	while(count < len){
		if (count % T0 == 0){
			x[count] = 1;
		}else {
			x[count] = 0;
		}
		count++;
	}
}

void printArray(int x[], int len){
	string array = "[";
	for (int i = 0; i < len; i++){
		if(i < len - 1){
			array += to_string(x[i]) + ",";
		}else{
			array += to_string(x[i]);
		}
	}
	array += "]";
	for (int i = 0; i < len;i++){
		cout << x[i] << " ";
	}
	cout << endl;
//	cout << array << endl;
}

void createImpTrain_ptr(int x[], int len, int T0){
	int *ptr = x;
	int count = 0;
	while(count < len){
		if(count % T0 == 0){
			*(ptr+count) = 1;
		}else {
			*(ptr+count) = 0;
		}
		count++;
	}

}

void question1(){
	int T0 = 5;
	int x[LEN], y[LEN];
	createImpTrain(x, LEN, T0);
	createImpTrain_ptr(y, LEN, T0);
	printArray(x, LEN);
	printArray(y, LEN);
}



double square(double num){
	return num*num;
}
double cube(double num){
	return num*num*num;
}

double pNorm(double x[], int len, int p){
	double result = 0;
	for(int i = 0; i < len; i++){
		if(p == 1){
			if (x[i] < 0) {
				x[i] = -1*x[i];
			}
			result += x[i];
		}else if (p==2){
			if (x[i] < 0) {
				x[i] = -1*x[i];
			}
			result += square(x[i]);
		}else if (p==3){
			if (x[i] < 0) {
				x[i] = -1*x[i];
			}
			result += cube(x[i]);
		}
	}
	if (p == 2){;
		return sqrt(result);
		cout << "selam";
	}else if (p == 3){
		return cbrt(result);
	}
	return result;
}

void question2(){
	double vect1[]={-3,4}, vect2[] = {3, 4}, vect3[] = {1,0,0};
	cout << "L1-norm(vect1) = " << pNorm(vect1, 2, 1) << endl;
	cout << "L2-norm(vect1) = " << pNorm(vect1, 2, 2) << endl;
	cout << "L1-norm(vect2) = " << pNorm(vect2, 2, 1) << endl;
	cout << "L2-norm(vect2) = " << pNorm(vect2, 2, 2) << endl;
	cout << "L1-norm(vect3) = " << pNorm(vect3, 3, 1) << endl;
	cout << "L2-norm(vect3) = " << pNorm(vect3, 3, 2) << endl;

}

double max(double x[], int len){
	int max_val = x[0];
	for(int i = 0; i < len; i++){
		if(x[i] > max_val){
			max_val = x[i];
		}
	}
	return max_val;
}

double min(double x[], int len){
	int min_val = x[0];
	for (int i = 0; i < len; i++){
		if (min_val > x[i]){
			min_val = x[i];
		}
	}
	return min_val;
}

void normalization(double x[], int len, double max, double min){
	for(int i = 0; i < len; i++){
		double result = 0;
		result = (x[i] - min)/(max-min);
		x[i] = result;
	}
	x[0] = 0;
	x[len-1] = 1;
}

string printArray(double x[], int len){
	string array = "[";
	for (int i = 0;i < len;i++){
		if(i != len-1){
			array += to_string(x[i]) + ",";
		}else{
			array += to_string(x[i]) + "]";
		}
	}
	return array;
}

double meanofArray(double x[], int len){
	double totalValue = 0, mean = 0;
	for(int i = 0; i < len;i++){
		totalValue += x[i];
	}
	mean = totalValue/len;
	return mean;
}


double standart_deviation(double x[], int len){
	double standartDeviation = 0, totalValue = 0, mean = 0, totalStan = 0;
	for(int i = 0; i < len;i++){
		totalValue += x[i];
	}
	mean = totalValue/len;
	for(int i = 0; i < len;i++){
		totalStan += (x[i] - mean)*(x[i] - mean);
	}
	totalStan = totalStan / (len - 1);
	standartDeviation = sqrt(totalStan);
	return standartDeviation;
}

void normalizationSD(double x[], int len, double mean, double SD){
	for(int i = 0; i < len; i++){
		double result = 0;
		result = (x[i] - mean) / SD;
		x[i] = result;
	}
}

void question3(){
	double vect[] = {5,8,9,11,20,22,24,25,29};
	int len = 9;
	cout << "original array --> \n" << printArray(vect,len) << endl;
	double max_val = max(vect,len);
	double min_val = min(vect,len);
	normalization(vect,len,max_val,min_val);
	cout << "normalization array --> \n" << printArray(vect,len) << endl;
	double vect2[] = {5,8,9,11,20,22,24,25,29};
	int len2 = 9;
	cout << "original second array --> \n" << printArray(vect2, len2) << endl;
	double mean = meanofArray(vect2, len2);
	double SD = standart_deviation(vect2, len2);
	normalizationSD(vect2, len, mean, SD);
	cout << "normalization second array --> \n" << printArray(vect2, len2) << endl;
}























