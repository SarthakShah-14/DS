#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll_no;
    char name[20];
    int sub1,sub2,sub3,total;
struct student *next;
}*first=NULL,*last=NULL,*nn= NULL,*prev,*curr,*temp;
int choice,ch;
void insert();
void display();
void delete_by_rno();
void high_marks();
int main()
{
    do
    {
     printf("----------Student menu-----------\n");
        printf("1. Enter student details \n");
        printf("2. Display student details \n");
        printf("3. delete roll no \n");
        printf("4. highest marks \n");
        printf("5. exit\n");    
        printf("enter your choice \n");
        scanf("%d", &choice);
        switch(choice)
        {
             case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete_by_rno();
            break;
        case 4:
            high_marks();
            break;
        case 5:
        printf("Code exited");
            return 1;
            break;
        default:
        printf("Enter proper choice");
        }
    } while (1);
    
return 0;
}
void insert()
{
    
nn=(struct student *)malloc(sizeof(struct student));
printf("Enter the roll no");
scanf("%d",&nn->roll_no);
printf("Enter the name of student");
scanf("%s",nn->name);
printf("Enter the 3 subject marks");
scanf("%d%d%d",&nn->sub1,&nn->sub2,&nn->sub3);
nn->total=nn->sub1+nn->sub2+nn->sub3;
nn->next=NULL;
if(first==NULL)
{
    first=nn;       
    last=nn;
}
else
{
    last->next=nn;
    last=nn;
}
}
void display()
{
if(first==NULL)
{
    printf("Student List is empty");
}
else
{
    temp=first;
    while(temp!=NULL)
    {
    printf("Student details are:");
    printf("Roll No:%d",nn->roll_no);
    printf("Name:%s",nn->name);
    printf("3 Subject Marks are:%d%d%d",nn->sub1,nn->sub2,nn->sub3);
    printf("Total:%d",nn->total);
    printf("\n");
    temp=temp->next;
    }
}
}
void delete_by_rno()
{   
if(first==NULL)
{
    printf("Student List is empty");
}
else
{
    int r;
    printf("Enter the no you want to delete");
    scanf("%d",&r);
    curr=first;
    prev=NULL;
    while(curr!=NULL)
    {
        if(curr==r)
        {   
            break;
        }
        prev=curr;
        curr=curr->next;    
    }
    if(curr==first)
    {
        printf("Deleted element is:",curr->roll_no);
        temp=first;
        first=first->next;
        free(temp);
    }
    else if(curr==last)
    {
        temp = first;

            while (temp->next != last)
            {
                temp = temp->next;
            }
            printf("deleted roll no is :%d\n", curr->roll_no);
            last = temp;
            last->next = NULL;
            free(curr);
    }
    else
    {
      printf("deleted roll no is :%d\n", curr->roll_no);
      prev->next=curr->next;
      free(curr);
 
    }
}
}
void high_marks()
{
    if(first==NULL)
    {
        printf("Student list is empty");
        return ;
    }
    temp=first;
    int max=temp->total;
    while(temp!=NULL)
    {
    if(temp->total>max)
    {
        max=temp->total;
    }
    temp=temp->next;
    }
    printf("Max total marks: %d\n", max);
    temp=first;
    while(temp!=NULL)
    {
        if(temp->total==max)
        {
    printf("Student details are:");
    printf("Roll No:%d",nn->roll_no);
    printf("Name:%s",nn->name);
    printf("3 Subject Marks are:%d%d%d",nn->sub1,nn->sub2,nn->sub3);
    printf("Total:%d",nn->total); 
        }
        temp=temp->next;
    }

}
