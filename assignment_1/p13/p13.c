/*
 * p13.c
 *
 *  Created on: 02-Aug-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
int max=5;
char stack1[max],stack2[max];
printf("Enter the value of stack 1");
scanf("%s",stack1);
//reverse
int i,j;
	for(i=max-1,j=0;i>=0,j<max;i--,j++)
{
	stack2[j]=stack1[i];
}
printf("Reverse String is:%s",stack2);
		return 0;
}




