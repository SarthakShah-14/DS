/*
 * p9.c
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{

	int arr[5]={1,2,3,4,5};
	int i;
	printf("Enter the location of which you want address");
	scanf("%d",&i);
	printf("The address of %d th element array is:%p\n",i+1,(void *)&arr[i]);

	return 0;
}

