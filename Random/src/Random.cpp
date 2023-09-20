//============================================================================
// Name        : Selam.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
using namespace std;

void histogramforzar(){
	int hist[] = {0,0,0,0,0,0};
	srand(time(0));
	int num;
	for(int i = 0;i < 10000;i++){
		num = 1+ rand()%6;
		hist[num-1] += 1;
	}
	for(int i = 1;i <= 6;i++){
		cout << hist[i-1] <<  " tane " << i << " var" << endl;
	}
}

void yazi_tura(){
	srand(time(0));
	for(int i = 0; i < 10; i++){
		int num = 1 + rand()%2;
		cout << num;
		if(num%2 == 0){
			cout << "Tura" << " ";
		}else {
			cout << "yazý" << " ";
		}
	}
}

void operationsOnHist(int x[], int len){
	int num = int('A');
	for(int i = 0;i<len;i++){
		cout << "There is " << x[i] << " " << char(i + num)<< endl;
	}
}

void randomWithCHAR(int len){
	srand(time(0));
	int hist[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(int i = 0;i < len;i++){
		char letter = char('A' + rand()%26);
		int index = int(letter) - int('A');
		hist[index] += 1;
	}
	operationsOnHist(hist,26);
}

void math_exam(){
	srand(time(0));
	int rand_for_question;
	int num1,num2,answer, counter = 0;
	for(int i = 0;i < 5;i++){
		rand_for_question = rand()%4;
		num1 = rand()%101;
		num2 = rand()%101;
		if(rand_for_question == 0){
			int result = num1 + num2;
			cout << num1 << "+" << num2 << "= ?"; cin >> answer;
			if(answer == result){
				cout << "Well done, It's correct" << endl;
				counter++;
			}else {
				cout << "It's not correct, answer should be " << result << endl;
			}
		}else if(rand_for_question == 1){
			int result = num1 - num2;
			cout << num1 << "-" << num2 << "= ?"; cin >> answer;
			if(answer == result){
				cout << "Well done, It's correct" << endl;
				counter++;
			}else {
				cout << "It's not correct, answer should be " << result << endl;
			}
		}else if(rand_for_question == 2){
			int result = num1 / num2;
			cout << num1 << "/" << num2 << "= ?"; cin >> answer;
			if(answer == result){
				cout << "Well done, It's correct" << endl;
				counter++;
			}else {
				cout << "It's not correct, answer should be " << result << endl;
			}
		}else if(rand_for_question == 3){
			int result = num1 * num2;
			cout << num1 << "*" << num2 << "= ?"; cin >> answer;
			if(answer == result){
				cout << "Well done, It's correct" << endl;
				counter++;
			}else {
				cout << "It's not correct, answer should be " << result << endl;
			}
		}
	}
	cout << "You have " << counter << " correct answers in 5 questions" << endl;
}

void sequential6(){
	srand(time(0));
	int num, counter = 0, reCounter = 0;
	do{
		reCounter++;
		num = 1+ rand()%6;
		if (num == 6){
			counter++;
		}else{
			counter = 0;
		}
	}while(counter < 3);
	cout << "Made " << reCounter << " experiment" << endl;
}

void putRandomIntsInArray(int array[], int len, int min, int max){
	srand(time(0));
	for(int i = 0;i <len;i++){
		array[i] = min + rand()%(max-min+1);
	}
	for (int i = 0;i <len;i++){
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
	sequential6();
	return 0;
}











