/*
 * p2.c
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
	int *q=&arr[4];

	for(int i=0;i<5;i++)
	{
		if(*p==*q)
		{
			printf("The  Mid Value of array is:%d\n",*p);
			break;
		}
		else
		{
			p++;
			q--;
		}
	}



	//another logic
//	while(p!=q)
//	{
//		p++;
//		q--;
//	}
//	printf("%d",*p);


	return 0;
}

