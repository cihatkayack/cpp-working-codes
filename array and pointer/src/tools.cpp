/*
 * tools.cpp
 *
 *  Created on: Apr 17, 2022
 *      Author: win10
 */
#include "tools.h"

void pointer_test1(){
	int a = 5;
	int *ptr = &a; // you can't say like this *ptr = a *ptr is address but a is a integer
	cout << *ptr << endl;
	cout << ptr << endl;
	cout << ptr+1 << endl;
	cout << *(ptr + 1) << endl;
//	----------------------------------------------
	*ptr = 8;
	cout << "value which came from addres: " <<*ptr << endl;
	cout << "new a: " << a << endl;
	for(int i = 0; i < *ptr; i++){
		cout << *(ptr+i) << endl;
		cout << ptr+i << endl;
		cout << a+i << endl;
	}
}


void pointer_test2(){
	int array[] = {1,2,3,4};
	cout << array << endl; //this gives starting address array[0]

	for(int i = 0; i < 4;i++){
		cout << &array[i] << endl;
	}
	cout << "-------------------------------------" << endl;
	int *ptr = &array[0];
	int *ptr2 = array;
	cout << ptr << endl;
	cout << ptr2 << endl;
	cout << *(ptr2+2) << endl;
}


void exampleofPointer1(){
	int x = 5, y = 10;
	int *px = &x;
	int *py = &y;
	cout << "address(x): " << px << endl;
	cout << "address(y): " << py << endl;
	cout << "y+1: "<<*(py+1) << endl;
	cout << "x-1: " << *(px-1) << endl;
}

void exampleofPointer2(){
	int x = 5;
	cout << "x = " << x << endl;
	int *px = &x;
	*px = 8; //*px is a value of x not address
	cout << "x = " << x << endl;
}


void exampleofPointer3(){
	int x = 5;
	int *px = &x;
	int *py = px;
	cout << "px = " << px << endl;
	cout << "py = " << py << endl;
	cout << "difference = " << px-py << endl;
	cout << "difference = " << *px-*py << endl;
}

void changeValue(int *px, int *py);

void exampleofPointer4(){
	int a = 100, b = 200;
	changeValue(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;
}

void changeValue(int *px, int *py){
	int temp = *px;
	*px = *py;
	*py = temp;
}

void exampleofPointer5(){
	int x = 5, y = 10, z = 15;
	int * ptr = &x;
	cout << y << z << endl;
	cout << "value at address "<< ptr << " = " << *ptr << endl;
	ptr++;
	cout << "value at address "<< ptr << " = " << *(ptr+2) << endl;
	ptr++;
	cout << "value at address "<< ptr << " = " << *ptr << endl;
}

void exampleofPointer6(){
	double x = 1.2;
	double *px = &x;
	double *py = px;
	cout << px << ", " << py << endl;
	px++;
	cout << px << ", " << py << endl;
	cout << "Differience = " << px-py << endl;
}

string printArray(int x[], int len);

void exampleofArray1(){
	int x[] = {1,2,3,4,5,6,7,8,9};
	int len = 9, total = 0;
	for (int i = 0; i < len; i++){
		total += x[i];
	}
	cout << printArray(x,len) << " total: " << total << endl;
}

string printArray(int x[], int len){
	string array = "[";
	for (int i = 0; i < len; i++){
			if (i != len-1){
				array += to_string(x[i]) + ",";
			}else {
				array += to_string(x[i]);
			}
		}
		array += "]";
	return array;
}

string printArray(string x[], int len){
	string array = "[";
	for (int i = 0; i < len; i++){
			if (i != len-1){
				array += x[i] + ",";
			}else {
				array += x[i];
			}
		}
		array += "]";
	return array;
}

void exampleofArray2(){
	int x[] = {7,2,-3,4,0};
	int *ptr = x; // you can use --> int *ptr = &x[0];
	for(int i = 0; i < 5;i++){
		cout << *(ptr+i) << " ";
	}
	cout << endl;
	cout << printArray(x,5) << endl;
}

void summation(int x[], int y[], int z[], int len){
	for (int i = 0; i < len; i++){
		z[i] = x[i] + y[i];
	}
}

void exampleofArray3(){
	int x[] = {7,2,-3,4,0};
	int y[] = {0,5,3,2,1};
	int z[5];
	summation(x,y,z,5); // every array is address so they make everything in address so we don't need return function
	cout << printArray(z,5) << endl;
}

int max(int x[], int len){
	int max_value = x[0];
	for (int i = 0; i < len; i++){
		if (x[i] > max_value){
			max_value = x[i];
		}
	}
	return max_value;
}

int min(int x[], int len){
	int min_value = x[0];
	for (int i = 0; i < len; i++){
		if(min_value > x[i]){
			min_value = x[i];
		}
	}
	return min_value;
}

void exampleofArray4(){
	int len = 8;
	int x[len] = {12,45,-34,6,476,1,-9,34};
	cout << printArray(x,len) << " max--> "<< max(x,len) << endl;
	cout << printArray(x,len) << " min--> "<< min(x,len) << endl;
}

void inverseArray(int x[], int len){
	int temp1, temp2;
	for(int i = 0; i < len/2; i++){
		temp1 = x[i];
		temp2 = x[len-1-i];
		x[i] = temp2;
		x[len-1-i] = temp1;
	}
}

void exampleofArray5(){
	int len = 8;
	int x[len] = {12,45,-34,6,476,1,-9,34};
	cout << "original array --> " << printArray(x,len) << endl;
	inverseArray(x,len);
	cout << "inverse array --> " << printArray(x,len) << endl;
}


void exampleofArray6(){
	string x[] = {"Cihat", "Hamide", "Turgay", "Furkan"};
	cout << printArray(x,4) << endl;
}

void exampleofArray7(){
	int len;
	cout << "Length of the array: ";cin >> len;
	int x[len];
	for(int i = 0; i < len;  i++){
		cout << "Input a element for array: ";cin >> x[i];
	}
	cout << printArray(x,len) << endl;
}

int docproduct(int x[], int y[], int len){
	int sum = 0;
	for (int i = 0; i < len;i++){
		sum += x[i] * y[i];
	}
	return sum;
}

void exampleofArray8(){
	int x[] = {3,4}, y[] = {0,1};
	int len = 2;
	cout << "x.y = " << docproduct(x,y,len) << endl;
}

void mixed(){
	int len = 8;
	int x[len] = {12,45,-34,6,476,1,-9,34};
	int *ptr = &x[0];
	string array = "[";
	for (int i = 0; i < len; i++){
			if (i != len-1){
				array += to_string(*(ptr+i)) + ",";
			}else {
				array += to_string(*(ptr+i));
			}
	}
	array += "]";
	cout << array << endl;
}

void inverseArray_pointer(int len, int *ptr){
	int temp1, temp2;
	for(int i = 0; i < len/2; i++){
		temp1 = *(ptr+i);
		temp2 = *(ptr+len-i-1);
		*(ptr + i) = temp2;
		*(ptr+len-i-1) = temp1;
	}
}

void mixed2(){
	int len = 8;
	int x[len] = {12,45,-34,6,476,1,-9,34};
	cout << "original array --> " << printArray(x,len) << endl;
	int *ptr = &x[0];
	inverseArray_pointer(len, ptr);
	cout << "inverse array --> " << printArray(x,len) << endl;
}

string printArray_pointer(string *prt, int len){
	string array = "[";
	for (int i = 0; i < len; i++){
			if (i != len-1){
				array += *(prt+i) + ",";
			}else {
				array += *(prt+i);
			}
		}
		array += "]";
	return array;
}

void mixed3(){
	int len;
	cout << "Length of the array: ";cin >> len;
	string x[len];
	for(int i = 0; i < len;  i++){
		cout << "Input a element for array: ";cin >> x[i];
	}
	cout << printArray_pointer(&x[0],len) << endl;
}


void mixed4(){
	int x[] = {1,2};
	int *ptr = x;
	for (int i = 0; i < 2; i++){
		cout << x[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++){
		cout << *(x+i) << " ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++){
		cout << *(ptr+i) << " ";
	}
	cout << endl;
}














