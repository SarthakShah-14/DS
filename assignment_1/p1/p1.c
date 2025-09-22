/*
 * p1.c
 *
 *  Created on: 27-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
int a[10],i;
printf("Enter the array elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
int*ptr1=&a[0],*ptr2=&a[10];

if(ptr1==ptr2)
{
	printf("The location is same");
}
else
{
	printf("The location is not same");
	ptr2--;
	ptr1++;
}

	return 0;
}

