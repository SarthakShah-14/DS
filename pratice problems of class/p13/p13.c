/*
 * p13.c
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{

//	printf("Enter m");
//	scanf("%d",&m);
//	printf("Enter n");
//	scanf("%d",&n);
	//int arr[3][3];
	int a,d,i,j,add;
	printf("Enter the base address");
	scanf("%d",&a);
	printf("Enter the data type value");
	scanf("%d",&d);
	printf("Enter The value of i");
	scanf("%d",&i);
	printf("Enter the value of j");
	scanf("%d",&j);
	//res=((3*(j-1))+(i-1));


	 //add=a+[d];
	 add=a+(d*((3*(j-1))+(i-1)));
	printf("The address of arr[i][j] is:%d",add);
	return 0;
}
