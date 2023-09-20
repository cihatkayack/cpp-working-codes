/*
 ============================================================================
 Name        : variables_etc_c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
//	a comment you can write
/*
 * you can write lots of line here freely
 *
 *
 * basis variables: char, int ,float, double, short, long
 *
 */

	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;

	printf("%d %c %d %f %f %s\n", a1, b1, b2 ,c1, d1, "Cihat");
	printf("%d %c %10d %.1f %.2f %s\n", a1, b1, b2 ,c1, d1, "Cihat");

	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));

	return 0;
}










