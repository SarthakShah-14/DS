/*
 * p2.c
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
int check();
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
			if(check()==1)
			{
				delete();
			}
			else
			{
				printf("Queue is empty");
			}
			break;
		case 3:
			//printf("\n\n");
			if(check()==1)
				{
					display();
				}
			else
				{
					printf("Queue is empty");
				}
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
	if((f==1&&r==max)||(f-r==1))
	{
		printf("Queue will be overflowed\n");
       return ;
	}
	printf("Enter the value\n");
	scanf("%d",&value);
	if(r==max)
	{
		r=1;
		queue_arr[r]=value;
	}
	else
	{
		r=r+1;
		queue_arr[r]=value;
	}
	if(f==0)
	{
		f=1;
	}

}
void delete()
{
	printf("%d",queue_arr[f]);
	if(f==r)
	{
		f=0,r=0;
	}
	else if(f==max)
	{
		f=1;
	}
	else
	{
		f=f+1;
	}
}
void display()
{
	printf("Queue Elements are:");
	if(r<f)
	{
		for(int i=f;i<=max;i++)
		{
			printf("%d\t",queue_arr[i]);
		}
		for(int j=1;j<=r;j++)
		{
			printf("%d\t",queue_arr[j]);

		}
	}
	else
	{
		for(int i=f;i<=r;i++)
		{
			printf("%d\t",queue_arr[i]);

		}
	}
printf("\n");
}
int check()
{
	if(f==0)
		{
			return 0;
		}
	else
	{
		return 1;
	}
}


