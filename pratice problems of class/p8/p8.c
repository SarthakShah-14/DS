/*
 * p8.c
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */


#include<stdio.h>
struct student {
	int rollno;
	char name[10];
	int sem;
	int sub1,sub2,sub3;
	float percentage;
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
		printf("Enter your  3 subject marks");
		scanf("%d %d %d",&sp->sub1,&sp->sub2,&sp->sub3);
		sp->percentage=(sp->sub1+sp->sub2+sp->sub3)/3;
		sp++;
	}

	sp=s;
	printf("The percentage of students are:\n");
	for(i=0;i<3;i++)
	{
		printf("Percentage of student %d is:%f\n",i+1,sp->percentage);
		sp++;

	}
	return 0;
}






