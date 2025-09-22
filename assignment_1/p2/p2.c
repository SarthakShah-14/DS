/*
 * p2.c
 *
 *  Created on: 27-Jul-2024
 *      Author: root
 */

#include<stdio.h>
int main()
{
	char arr[10];
	printf("Enter Your String");
	scanf("%s",arr);

	int l=0;
	char * str=arr;
	while(*str!='\0')
		{
			str++;
			l++;
		}
	printf("Length is:%d",l);

	return 0;
}

