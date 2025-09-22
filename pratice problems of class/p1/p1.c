/*
 * p1.c
 *
 *  Created on: 10-Jul-2024
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int arr[10],i,j;
	printf("Enter the array elements");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	}
	int max=arr[0];
	 int min=arr[0];
	 for(i=0;i<10;i++)
	 {
		 for(j=i+1;j<10;j++)
		 {
			 if(arr[i]<arr[j])
			 {
				 max=arr[j];
			 }
			  else if(arr[i]>arr[j])
			 {
				 min=arr[j];

			 }
		 }
	 }
	printf("min:%d\nmax:%d",min,max);
	return 0;
}
