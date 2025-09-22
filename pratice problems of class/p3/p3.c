/*
 * p3.c
 *
 *  Created on: 10-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter Your elements");
		for(int i=0;i<5;i++)
		{
		scanf("%d",&arr[i]);
		}
	int *p=&arr[0];
	 int max=arr[0];
	 for(int i=0;i<5;i++)
	 {
		if(max<*p)
		{
			max=*p;
		}
		p++;
	 }
	 printf("%d",max);

	return 0;
}

