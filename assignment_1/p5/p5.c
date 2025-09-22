/*
 * p5.c
 *
 *  Created on: 29-Jul-2024
 *      Author: root
 */
#include<stdio.h>
struct student {
	int rollno;
	char name[10];
	int sem;
	int sgpa;
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter your roll no:");
		scanf("%d",&s[i].rollno);
		printf("Enter your name");
		scanf("%s",s[i].name);
		printf("Enter your semester");
		scanf("%d",&s[i].sem);
		printf("Enter your SGPA");
		scanf("%d",&s[i].sgpa);
	}
	printf("----------------------------------------------------------\n");
	printf("Before sorting:\n");
	for(i=0;i<3;i++)
		{
			printf("Name:%s\n",s[i].name);
			printf("Roll No:%d\n",s[i].rollno);
			printf("Semester is:%d\n",s[i].sem);
			printf("Sgpa is:%d\n",s[i].sgpa);
		}
	printf("----------------------------------------------------------");
	struct student temp;
	for(i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		if(s[i].sgpa<s[j].sgpa)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
	printf("----------------------------------------------------------\n");
	printf("Sorted detail is:\n");
	for(i=0;i<3;i++)
	{
		printf("Name:%s\n",s[i].name);
		printf("Roll No:%d\n",s[i].rollno);
		printf("Semester is:%d\n",s[i].sem);
		printf("Sgpa is:%d\n",s[i].sgpa);
	}
	printf("----------------------------------------------------------");
	return 0;
}

