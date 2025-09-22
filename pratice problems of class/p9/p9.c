/*
 * p9.c
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int a,*p,**dp;
	a=5;
	p=&a;
	dp=&p;
	printf("value of a is:%d\n",a);
	printf("value of *p is:%d\n",*p);
	printf("value of **dp is:%d\n",**dp);
	return 0;

}

