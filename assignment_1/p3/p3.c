/*
 * p3.c
 *
 *  Created on: 27-Jul-2024
 *      Author: root
 */
#include<stdio.h>
void input (int *,int);
void output (int *,int);
void max (int *,int);
void min (int *,int);
int main ()
{
	int a[5];
	input(&a[0],5);
	output(&a[0],5);
	max (&a[0],5);
	min (&a[0],5);
	return 0;
}
void input (int *p,int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		printf("Enter a array element[%d] :",i);
		scanf("%d",(p+i));
	}
}
void output (int *p,int n)
{
	int i;
	for(i = 0 ; i < n ; i++)
	{
		printf("\t %d",*(p+i));
	}
}
void max (int *p,int n)
{
	int i;
	int maximum = *p;
	for(i = 0 ; i < n ; i++)
	{
		if ( maximum < *(p+i))
		{
			maximum = *(p+i);
		}
	}
	printf("\n Max element is :%d",maximum);
}
void min (int *p,int n)
{
	int i;
	int minimum = *p;

		for(i = 0 ; i < n ; i++)
		{
			if ( minimum > *(p+i))
			{
				minimum = *(p+i);
			}
		}
		printf("\n Min element is :%d",minimum);
}

