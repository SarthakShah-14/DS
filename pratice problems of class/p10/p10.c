/*
 * p10.c
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int b,c,i,a[10];
	printf("Enter the base address:");
	scanf("%d",&b);
	printf("Enter the no of bytes of datatype");
	scanf("%d",&c);
	printf("Enter the location:");
	scanf("%d",&i);
	int add;
	add=b+c*(i-0);

	printf("The address of location %d is %d",i,add);
}
