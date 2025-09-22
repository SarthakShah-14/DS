/*
 * p11.c
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{

	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
	printf("The address of %d th element array is:%p\n",i,(void *)&arr[i]);
	}
	return 0;
}

