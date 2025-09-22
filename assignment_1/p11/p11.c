/*
 * p11.c
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */
#include<stdio.h>
#define max 5
int top=-1;
int stack_arr[max];
void push();
void pop();
void peep();
void displayfromtop();
void displayfrombottom();
int main()
{
	int choice;
	do
	{
		printf("\nPlease enter\n1 for push\n2 for pop\n3 for peep\n4 for display from top\n5 for display from bottom\n6 for exit\n");
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
			pop();
			break;
		case 3:
			//printf("\n\n");
			peep();
			break;
		case 4:
			//printf("\n\n");
			displayfromtop();
			break;
		case 5:
			//printf("\n\n");
			displayfrombottom();
			break;
		case 6:
			printf("Code Exiting...");
			return 1;
		default:printf("Enter valid input\n");
		break;
		}
	}
	while(1);

	return 0;
}
void push()
{

	if(top==max-1)
	{
		printf("Stack is full");
		return ;
	}
	top++;
	printf("Enter Element");
	scanf("%d",&stack_arr[top]);
	printf("Element added successfully");
	return ;
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
		return ;
	}
	stack_arr[top]=0;
	top--;
	printf("Element removed sucessfully");
}
void peep()
{
	if(top==-1)
	{
		printf("Stack is Empty");
		return ;
	}
	printf("|%d|\n",stack_arr[top]);
	return ;
}
void displayfromtop()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
		return ;
	}
	for(int i=0;i<=top;i++)
	{
		printf("|%d|\n",stack_arr[i]);
	}

	printf("____");

	return ;
}
void displayfrombottom()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
		return ;
	}
	for(int i=top;i>=0;i--)
	{
		printf("|%d|\n",stack_arr[i]);
	}

	printf("____");

	return ;
}


