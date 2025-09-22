/*
 * p4.c
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main ()
{
	int a[5] = {1,2,3,4,5};
	int *p= &a[0];
	printf("\n Value of *p++ is :%u",*p++);
	printf("\n Value of p-- is :%p",p--);
	printf("\n Value of *++p is :%u",*++p);

	return 0;
}

