/*
 * p9_1.c
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{

	int arr[3][3];
	printf("Enter your elements:");
	for(int i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
		{
	scanf("%d",&arr[i][j]);
		}
}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			printf("The address of arr[%d][%d] th element array is:%p\n",i,j,(void *)&arr[i][j]);
//		}
//	}
				int i,j;
				printf("Enter the location of which you want address");
				scanf("%d%d",&i,&j);
				printf("The address of arr[%d][%d] th element array is:%p\n",i,j,(void *)&arr[i][j]);

	return 0;
}


