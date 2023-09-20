/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main() {

	int radius;
	float hacim;


	printf("Enter radius of sphere: ");
	scanf("%d",&radius);

	hacim = (4/3.0) * PI * (radius*radius*radius);
	printf("\nKürenin hacmi: %f", hacim);

	return 0;
}
