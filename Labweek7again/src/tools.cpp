/*
 * tools.cpp
 *
 *  Created on: Apr 19, 2022
 *      Author: win10
 */



#include "tools.h"
#define LEN 20

void createImpTrain(int x[],int len ,int T0){
	int count = 0;
	while (count < len){
		if(count % T0 == 0){
			x[count] = 1;
		}else {
			x[count] = 0;
		}
		count++;
	}
}

void createImpTrain_ptr(int x[], int len, int T0){
	int count = 0;
	int *ptr = x;
	while (count < len){
		if(count % T0 == 0){
			*(ptr + count) = 1;
		}else {
			*(ptr + count) = 0;
		}
		count++;
	}
}
void printArray(int x[],int len){
	for (int i = 0; i < len; i++){
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
}

double square(double num){
	return num*num;
}

double pNorm(double x[], int len,int p){
	double result = 0;
	for (int i = 0;i < len; i++){
		if(p==2){
			result += square(x[i]);
		}else {
			if (x[i] < 0){
				x[i] = -1*x[i];
			}
			result += x[i];
		}
	}

	if (p== 2){
		result = sqrt(result);
	}
	return result;
}



int max(double x[], int len){
	int max_val = x[0];
	for (int i = 0; i < len; i++){
		if (x[i] > max_val){
			max_val = x[i];
		}
	}
	return max_val;
}

int min(double x[], int len){
	int min_val = x[0];
	for (int i = 0; i < len; i++){
		if (x[i] < min_val){
			min_val = x[i];
		}
	}
	return min_val;
}

void normalization(double x[], int len){
	for(int i = 0; i < len; i++){
		double result = 0;
		result = (x[i]-min(x,len))/(max(x,len) - min(x,len));
		x[i] = result;
	}
	for (int i = 0;i< len; i++){
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
}
