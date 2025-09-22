/*
 * p15.c
 *
 *  Created on: 07-Aug-2024
 *      Author: root
 */
#include<stdio.h>
# define max 50
int stack_arr[max];
int top=-1;
void push();
int is_operator(char ch);
void postfix_evaluation();
int main()
{
postfix_evaluation();
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
		return ;
	}
int is_operator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	{
		return 1;
	}
	return 0;
}
void postfix_evaluation()
{
	char str[50];
	printf("Enter your postfix Expression:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		if((is_operator(str[i]))==1)
		{
			if(i<2)
			{
				printf("\n%c operation cant be done at %d",str[i],i);
				printf("\n=======================================");
				return ;
			}
			else
			{
				int num1=0,num2=0,ans=0;
				num2=stack_arr[top];
				top--;
				num1=stack_arr[top];
				if(str[i]=='+')
				{
					ans=num1+num2;
				}
				else if(str[i]=='-')
				{
					ans=num1-num2;
				}
				else if(str[i]=='*')
				{
					ans=num1*num2;
				}
				else if(str[i]=='/')
				{
					ans=num1/num2;
				}
				stack_arr[top]=ans;
			}
		}
		else
		{
			printf("Enter the value of %c=",str[i]);
			push();
		}
	}
	printf("Final Output=%d",stack_arr[top]);
	top--;
	return;
}


