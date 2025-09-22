/*
 * p6.c
 *
 *  Created on: 31-Jul-2024
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
	struct student *sp;
	sp=&s[0];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter your roll no:");
		scanf("%d",&sp->rollno);
		printf("Enter your name");
		scanf("%s",sp->name);
		printf("Enter your semester");
		scanf("%d",&sp->sem);
		printf("Enter your SGPA");
		scanf("%d",&sp->sgpa);
		sp++;
	}
	sp=s;
	printf("----------------------------------------------------------\n");
	printf("Before sorting:\n");
	for(i=0;i<3;i++)
		{
			printf("Name:%s\n",sp->name);
			printf("Roll No:%d\n",sp->rollno);
			printf("Semester is:%d\n",sp->sem);
			printf("Sgpa is:%d\n",sp->sgpa);
			sp++;
		}
	sp=s;
	printf("----------------------------------------------------------");
	struct student temp;
	for(i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		if((sp+i)->sgpa < (sp+j)->sgpa)
		{
			temp=*(sp+i);
			*(sp+i)=*(sp+j);
			*(sp+j)=temp;
		}
	}
	sp=s;
	printf("----------------------------------------------------------\n");
	printf("Sorted detail is:\n");
	for(i=0;i<3;i++)
	{
		printf("Name:%s\n",sp->name);
		printf("Roll No:%d\n",sp->rollno);
		printf("Semester is:%d\n",sp->sem);
		printf("Sgpa is:%d\n",sp->sgpa);
		sp++;
	}
	printf("----------------------------------------------------------");
	return 0;
}


