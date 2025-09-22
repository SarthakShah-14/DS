/*
 * p3.c
 *
 *  Created on: 16-Oct-2024
 *      Author: root
 */
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*first=NULL,*last=NULL,*tmp=NULL,*curr=NULL;

int isempty()
{
	return first==NULL;
}
void insertlast()
{
	tmp=(struct node*)malloc(sizeof (struct node));
	printf("enter data:");
	scanf("%d",&tmp->data);

	tmp->next=NULL;
	if(isempty())
	{
		first=last=tmp;
	}
	else
	{
		last->next=tmp;
		last=tmp;
	}
     return;
}
void deletefirst()
	{
	if(isempty())
	{
		printf("\n linked list is empty");
		return;
	}
	else
	{
		tmp=first;
		printf("%d data is deleted",tmp->data);
		if(first==last)
		{
			first=last=NULL;
		}
		else
		{
			first=first->next;
		}
		free(tmp);
	}
	return;
}
void traversal()
{
	if(isempty())
	{
	printf("\n linked list is empty");
	return;
	}
	else
	{
	curr=first;
	while(curr!=NULL)
	{
	printf("\t%d",curr->data);
	curr=curr->next;
	}
	}
}
int main()
{
	int choice;
	do{

	printf("\n*** Queue with Linked list menu***");
	printf("\n 1.insert ");
	printf("\n 2.delete");
	printf("\n 3.Traversal");
	printf("\n 4.Exit");

	scanf("%d",&choice);
	switch(choice)
		{
			  case 1:
				   insertlast();
			      break;

			case 2:
				deletefirst();
			    break;

			case 3:
		 		traversal();
			    break;

			case 4:
		       return 0;
			 break;
		}
			}
			while(choice!=11);
      return 0;
	}

