#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{

  char name[30];
  int rollno;
  int m1, m2, m3;
  int total;

  struct Student *right, *left;

} *first = NULL, *last = NULL, *nn = NULL;

void input()
{
  nn = (struct Student *)malloc(sizeof(struct Student));

  printf("enter a roll no of student\n");
  scanf("%d", &nn->rollno);
  printf("enter a name of student\n");
  scanf("%s", nn->name);
  printf("enter a three subject marks  of student\n");
  scanf("%d%d%d", &nn->m1, &nn->m2, &nn->m3);
  nn->total = nn->m1 + nn->m2 + nn->m3;

  if (first == NULL)
  {
    first = nn;
    last = nn;
  }
  else
  {
    last->right = nn;
    nn->left = last;
    last = nn;
  }
};

void display()
{

  if (first == NULL)
  {
    printf("list is empty\n");
  }

  struct Student *temp;

  temp = first;

  while (temp != NULL)
  {

    printf("name:%s\n", temp->name);
    printf("Roll no:%d\n", temp->rollno);
    printf("marks of sub1:%d,sub2:%d,sub3:%d\n", temp->m1, temp->m2, temp->m3);
    printf("total:%d\n\n\n", temp->total);
    temp = temp->right;
  }
}

void highmarks()
{

  struct Student *temp = first;
  int max = temp->total;

  while (temp != NULL)
  {

    if (max < temp->total)
    {
      max = temp->total;
    }
    temp = temp->right;
  }

  temp = first;
  while (temp != NULL)
  {

    if (max == temp->total)
    {
      printf("\n\ndetail of student who get maximum marks\n");
      printf("name:%s\n", temp->name);
      printf("Roll no:%d\n", temp->rollno);
      printf("marks of sub1:%d,sub2:%d,sub3:%d\n", temp->m1, temp->m2, temp->m3);
      printf("total:%d\n\n\n", temp->total);
      break;
    }
    temp = temp->right;
  }
}

void delete1()
{

  if (first == NULL)
  {
    printf("list is empty\n");
  }

  else
  {
    char name1[20];
    printf("enter a name you want to delete:\n");
    scanf("%s", name1);
    struct Student *cur = first, *pre=NULL;

    while (cur != NULL)
    {
      if (strcmp(name1, cur->name) == 0)
      {
        break;
      }
      pre = cur;
      cur = cur->right;
    }

    printf("%s is deleted\n", cur->name);

    if (cur == first)
    {

      first = first->right;
      free(cur);
    }
    else if (cur == last)
    {

      last = pre;
      last->right = NULL;
      free(cur);
    }
    else
    {
      cur->left->right = cur->right;
      cur->right->left = cur->left;
      free(cur);
    }
  }
}

void sort()
{

  struct Student *temp = first, *temp1 = first;

  while (temp != NULL)
  {

    temp1 = first;
    while (temp1 != NULL)
    {

      if (temp1->total > temp->total)
      {

        char swap1[20];
        strcpy(swap1, temp->name);
        strcpy(temp->name, temp1->name);
        strcpy(temp1->name, swap1);

        int swap2 = temp->rollno;
        temp->rollno = temp1->rollno;
        temp1->rollno = swap2;

        int marks1 = temp->m1;
        temp->m1 = temp1->m1;
        temp1->m1 = marks1;

        int marks2 = temp->m2;
        temp->m2 = temp1->m2;
        temp1->m2 = marks2;

        int marks3 = temp->m3;
        temp->m3 = temp1->m3;
        temp1->m3 = marks3;

        int swap = temp->total;
        temp->total = temp1->total;
        temp1->total = swap;
      }
      temp1 = temp1->right;
    }

    temp = temp->right;
  }

    temp = first;
  printf("\ndetails  of student according to thire total number of marks in accsending arder\n");
   while (temp != NULL)
  {

   
      
      printf("name:%s\n", temp->name);
      printf("Roll no:%d\n", temp->rollno);
      printf("marks of sub1:%d,sub2:%d,sub3:%d\n", temp->m1, temp->m2, temp->m3);
      printf("total:%d\n\n\n", temp->total);
    
    
    temp = temp->right;
  }

}

  void search(){
    int num;
    struct Student *temp=first;
    printf("enter a roll no you want search:\n");
    scanf("%d",&num);

    while(temp!=NULL){

      if(num==temp->rollno){
              printf("\nname is found ,details of student\n\n");
             printf("name:%s\n", temp->name);
              printf("Roll no:%d\n", temp->rollno);
              printf("marks of sub1:%d,sub2:%d,sub3:%d\n", temp->m1, temp->m2, temp->m3);
               printf("total:%d\n\n\n", temp->total);
              break;


      }
      temp=temp->right;

    }
  



  }
  
  int main()
  {

    int choice;

    do
    {
      printf("\n1.input\n");
      printf("2.display\n");
      printf("3.high marks\n");
      printf("4.exit\n");
      printf("5.sort\n");
      printf("6.delete\n");
      printf("7.search\n");

      printf("enter a choice\n");
      scanf("%d", &choice);

      switch (choice)
      {

      case 1:
        input();
        break;
      case 2:
        display();
        break;
      case 3:
        highmarks();
        break;
      case 4:
        printf("\nexit sucessfully\n");
        break;
      case 5:
        sort();
        break;
      case 6:
        delete1();
        break;
      case 7:
        search();
        break;

      default:
        printf("envalid choice\n");
        break;
      }
    } while (choice != 4);

    return 0;
  }