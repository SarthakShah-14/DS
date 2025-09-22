/*
 * p5.c
 *
 *  Created on: 10-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char arr[10];
	printf("Enter Your String");
	scanf("%s",arr);
	int i;
	int l=0;
	char * str=arr;
	while(*str!='\0')
		{
			str++;
			l++;
		}
	//printf("Length is:%d",l);
	str=arr;
	for(i=l;i>0;i--)
	{
		printf("%s",str);
		str--;
	}
	return 0;
}

