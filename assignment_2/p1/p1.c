/*
 * p1.c
 *
 *  Created on: 02-Sep-2024
 *      Author: root
 */
#include<stdio.h>
#define max 4
int queue_arr[max];
int f=0,r=0;
void insert();
void delete();
void display();
int main()
{
	int choice;
	do
	{
		printf("\nPlease enter\n1 for insert\n2 for delete\n3 for display\n4 for exit\n");
		printf("Enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			//printf("\n\n");
			insert();
			break;
		case 2:
			//printf("\n\n");
		delete();
		break;
		case 3:
			//printf("\n\n");
				display();
				break;
		case 4:
			printf("Code Exiting...");
			return 1;
		default:printf("Enter valid input\n");
		break;
		}
	}
	while(1);

	return 0;

}
void insert()
{
	int value;
	if(r==max)
	{
		printf("Queue will be overflowed\n");
       return ;
	}
	printf("Enter the value\n");
	scanf("%d",&value);
	r++;
	queue_arr[r]=value;
	if(r==1)
	{
		f=1;
	}

}
void delete()
{
	if(f==0)
	{
		printf("Queue is empty");
		return ;
	}
	printf("%d",queue_arr[f]);
	if(f==r)
	{
		f=0;
		r=0;
	}
	else
	{
		f=f+1;
	}
}
void display()
{
	if(f==0)
	{
		printf("Queue is empty");
		return ;
	}
	for(int i=f;i<=r;i++)
	{
		printf("%d",queue_arr[i]);
	}
}