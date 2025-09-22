/*
 * p7.c
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
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter your roll no:");
		scanf("%d",&s[i].rollno);
		printf("Enter your name");
		scanf("%s",s[i].name);
		printf("Enter your semester");
		scanf("%d",&s[i].sem);
		printf("Enter your  3 subject marks");
		scanf("%d %d %d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
		s[i].percentage=(s[i].sub1+s[i].sub2+s[i].sub3)/3;
	}
	printf("The percentage of students are:\n");
	for(i=0;i<3;i++)
	{
		printf("Percentage of student %d is:%f\n",i+1,s[i].percentage);

	}
	return 0;
}

