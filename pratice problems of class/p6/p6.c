/*
 * p6.c
 *
 *  Created on: 10-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter the array elements");
	for( int i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	int *ptr=&arr[0];
	for( int i=0;i<10;i++)
	{
	if((*ptr)%2==0)
	{
		printf("%d:even\n",*ptr);
	}
	else
	{
		printf("%d:odd\n",*ptr);
	}
	ptr++;
	}
	return 0;
}

