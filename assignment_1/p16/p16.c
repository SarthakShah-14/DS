/*
 * p16.c
 *
 *  Created on: 07-Aug-2024
 *      Author: root
 */
#include<stdio.h>
# define MAX 50
char stack1[MAX] , stack2[MAX] , stack3[2*MAX],ch1,ch2;
int top1=-1,top2=-1,top3=-1;
void push();
void push1();
int pop();
int pop1();
void print();
int main()
{
	int choice;
	do
	{
		printf("\nPlease enter\n1 for inputting in stack 1\n2 for inputting in stack 2\n3 for printing stack 3\n4 for exit\n");
		printf("Enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			//printf("\n\n");
			push();
			break;
		case 2:
			//printf("\n\n");
			push1();
			break;
		case 3:
			//printf("\n\n");
			print();
			break;
		case 4:
			printf("Code Exiting...");
			return 1;
		default:printf("Enter valid input\n");
		break;
		}
	}
	while(choice!=4);

	return 0;
}
void push()
{

	if(top1==MAX-1)
	{
		printf("Stack1 is full");
		return ;
	}
	top1++;
	printf("Enter Element");
	scanf(" %c",&ch1);
	stack1[top1]=ch1;
	printf("Element added successfully");
	//return ;
}
int pop()
{
	if(top1==-1)
	{
		printf("Stack 1 is Empty\n");
		return 0;
	}
	char p=stack1[top1];
	stack1[top1]=0;
	top1--;
	//printf("Element removed sucessfully");
	return p;
	//stack1[top1]=0;
}
void push1()
{

	if(top2==MAX-1)
	{
		printf("Stack 2 is full");
		return ;
	}
	top2++;
	printf("Enter Element");
	scanf(" %c",&ch2);
	stack2[top2]=ch2;
	printf("Element added successfully");
	return ;
}
int pop1()
{
	if(top2==-1)
	{
		printf("Stack 2 is Empty\n");
		return 0;
	}
	char s=stack2[top2];
	stack2[top2]=0;
	top2--;
	//printf("Element removed sucessfully");
	return s;
	//stack2[top2]=0;
}
void print()
{
	top3=0;

	stack3[top3]=pop();
	printf("%c\n",stack3[top3]);
	top3++;
	stack3[top3]=pop1();
	printf("%c\n",stack3[top3]);
	top3++;
}



//int main()
//{
//
//	printf("Enter your  stack 1:");
//	for(int i=0;i<MAX;i++)
//	{
//	scanf("%d",&stack1[i]);
//	}
//	printf("Enter your  stack 2:");
//	for(int i=0;i<MAX;i++)
//	{
//	scanf("%d",&stack2[i]);
//	}
//	int i=0,j=MAX-1;
//	while(j>=0)
//	{
//		stack3[i++]=stack1[j];
//		stack3[i++]=stack2[j];
//		j--;
//	}
//	printf("The stack 3 is:");
//	for(int i=0;i<(2*MAX);i++)
//	{
//	printf("\n[%d]",stack3[i]);
//	}
//}
