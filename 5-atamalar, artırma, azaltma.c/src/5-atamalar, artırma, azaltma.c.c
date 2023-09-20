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

int main() {

	int x = 5, y = 7, a = 2;
	x = y;
	y = x + a + 1;

	printf("x:%d\ny:%d\na:%d", x , y ,a);

	x = 4;
	y = 5;
	a = 6;

	printf("\nx:%d y:%d a:%d", --x , ++y ,a++);
	printf("\nx:%d y:%d a:%d",x , y ,a);

	x += a + 1;
	printf("\nx:%d", x);

	x = y = a + 4;
	printf("\nx:%d y:%d a:%d", x, y, a);


	return 0;
}
