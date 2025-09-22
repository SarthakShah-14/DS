/*
 * 5.c
 *
 *  Created on: 07-Oct-2024
 *      Author: root
 */
#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *left;
	int data;
	struct node *right;
}*first=NULL,*last=NULL,*curr=NULL,*tmp=NULL;

int isempty()
{
	return first==NULL;
}
void insertfirst()
{
	tmp=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&tmp->data);

	tmp->right=first;
	tmp->left=NULL;


	if(isempty())
	{
		first =last=tmp;
	}
	else
	{
		first->left=tmp;
		first=tmp;
	}
	last->right=first;

}

void insertlast()
{
	tmp=(struct node*)malloc(sizeof (struct node));
	printf("enter data:");
	scanf("%d",&tmp->data);


	tmp->left=last;
	if(isempty())
	{
		first=last=tmp;
	}
	else
	{
		last->right=tmp;
		last=tmp;
	}
	last->right=first;


}

void insertafter()
{
	if(isempty())
	{
		printf("\n linked list is empty");
		return;
	}
	else
	{
		int index,cnt=1;
		printf("enter index after when you want to add:");
		scanf("%d",&index);

		curr=first;
		while(curr->right!=NULL && cnt<index)
		{
		curr=curr->right;
		cnt++;
		}
		if(cnt==index)
		{
			tmp=(struct node*)malloc(sizeof (struct node));

			printf("enter data:");
			scanf("%d",&tmp->data);

			tmp->right=curr->right;
			curr->right=tmp;
			tmp->left=curr;
		if(curr==last)
		{
			last=tmp;
		}
		else
		{
			tmp->right->left=tmp;
		}
			printf("\n %d node is successfully inserted after %d index.",tmp->data,index);

		}
		else
		{
			printf("index is not found\n");
		}
	}

}
void traversalfirst()
{
	if(isempty())
	{
		printf("\n linked list is empty");
		return;
	}
	else
	{
		curr=first;
		do{
		printf("\t%d",curr->data);
		curr=curr->right;
		}
		while(curr!=first);
	}
}

void traversallast()
{
	if(isempty())
	{
		printf("\n linked list is empty");
		return;
	}
	else
	{
		curr=last;
		do{
		printf("\t%d",curr->data);
		curr=curr->right;
	}
	while(curr!=last);
	}

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
		printf("%d node is deleted",tmp->data);
		if(first==last)
		{
			first=last=NULL;
		}
		else
		{
			first=first->right;
			last->right=first;
		}
		free(tmp);
	}
}
void deletelast()
	{
		if(isempty())
		{
			printf("\n linked list is empty");
			return;
		}
		else
		{
			tmp=last;
			printf("%d node is deleted",tmp->data);
		if(first==last)
		{
			first=last=NULL;
		}
		else
		{
			last=last->left;
			last->right=first;
		}
		free(tmp);

	}
}
void deleteparticular()
{
	if(isempty())
	{
		printf("\n linked list is empty");
		return;
	}
	else
	{
		int index,cnt=1;
		printf("enter index after when you want to delete:");
		scanf("%d",&index);
		tmp=first;
		while(tmp->right!=NULL &&cnt<index)
		{
			cnt++;

			tmp=tmp->right;
		}
	if(cnt==index)
	{
		printf("%d node is deleted",tmp->data);
		curr=tmp;
		if(first==last)
		{
			first=last=NULL;
		}

		if(tmp==first)
		{
			first=first->right;
		}
		if(tmp==last)
		{
			last=last->left;
			last->right=first;
		}
		else
		{
			tmp->left->right=tmp->right;
			tmp->right->left=tmp->left;
		}
			free(tmp);
		}
		else
		{
			printf("index not found");
		}


	}
}
int main()
{
	int choice;
	do{
		printf("\n*** Linked list menu***");
		printf("\n 1.insert first");
		printf("\n 2.insert last");
		printf("\n 3.insert after");
		printf("\n 4.traversal first");
		printf("\n 5.traversal last");
		printf("\n 6.delete first");
		printf("\n 7.delete last");
		printf("\n 8.delete particular");

		printf("\n enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
		   case 1:
				insertfirst();
				break;

			case 2:
				insertlast();
				break;

			case 3:
				insertafter();
				break;

			case 4:
				traversalfirst();
				break;

			case 5:
				traversallast();
				break;

			case 6:
				deletefirst();
				break;

			case 7:
				deletelast();
				break;
			case 8:
				deleteparticular();
				break;

			case 9:
				return 0;

			default:
				printf("\n invalid choice");
				break;
	}
	}while(choice!=11);
	return 0;
}



