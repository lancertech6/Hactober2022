/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node*next;
};
struct node*head;
struct node*temp;
void create()
{
    int n;
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    head=newnode;
     temp=head;
    printf("enter the number:");
    scanf("%d",&n);
    newnode->info=n;
    newnode->next=NULL;
}
void insert_e()
{
    int n;
    struct node*nextnode;
    nextnode=(struct node*)malloc(sizeof(struct node));
    temp->next=nextnode;
    nextnode->next=NULL;
       printf("enter the number:");
    scanf("%d",&n);
    nextnode->info=n;
    temp=temp->next;
}
void display()
{
     struct node*ptr;
     ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
}
void insert_p()
{
     int n,x;
    struct node*nextnode;
     struct node*ptr;
     ptr=head;
    nextnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the number after which you want to insert new number:");
    scanf("%d",&n);
      printf("enter the number:");
    scanf("%d",&x);
    while(ptr->info!=n)
    {
        ptr=ptr->next;
    }
    nextnode->next=ptr->next;
    ptr->next=nextnode;
    nextnode->info=x;
}
void delete()
{
     int n;
   printf("\nenter the number which you want to delete:");
    scanf("%d",&n);
    struct node*ptr;
    struct node*q;
     ptr=head;
      while(ptr->info!=n)
    {
        q=ptr;
        ptr=ptr->next;
    }
    q->next=ptr->next;
}
int main()
{
  create();
  insert_e();
  insert_e();
  insert_e();
  insert_e();
  display();
  insert_p();
  display();
  delete();
    display();
    return 0;
}

