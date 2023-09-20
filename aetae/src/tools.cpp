/*
 * tools.cpp
 *
 *  Created on: Jun 26, 2022
 *      Author: win10
 */

#include "tools.h"

void createImpTrain(int x[], int LEN, int T0){
	for(int i = 0; i < LEN; i++){
		if(i%T0 == 0){
			x[i] = 1;
		}else{
			x[i] = 0;
		}
	}
}


void printArray(int x[], int LEN){
	for(int i = 0; i < LEN;i++){
		std::cout << x[i] << " ";
	}
	std::cout << std::endl;
}
