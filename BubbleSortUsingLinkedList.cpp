#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
struct node *head=NULL;
struct node *last=NULL;

void insert(int j)
{
    struct node *temp;
        temp = new node;
        temp->data=j;
        temp->next=NULL;
        if(head == NULL)
        {
            head = temp;
            last=temp;
        }
        else 
        {
            last->next=temp;
            last=temp;
        }
}

int bubble_sort(int a)
{
    struct node *temp;
    struct node *t=NULL;
    int i=0,k,count=0;
    temp=head;
    while(i<a)
    {
        temp=head;
        while(temp->next!=t)
        {
            if(temp->data > temp->next->data)
            {
                k=temp->data;
                temp->data=temp->next->data;
                temp->next->data=k;
                count++;
            }
            temp=temp->next;
        }
        if (count==0)
        return -1;
        t=temp;
        i++;
    }
    return 0;
}
void display()
{
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    int i,n,p,a,j,count=0;
    cout<<"Enter the number of elements you want in the list : ";
    cin>>a;
    cout<<"Enter the elements : ";
    for(i=0;i<a;i++)
    {
        cin>>j;
        insert(j);
    }
    cout<<"Original Linked list : ";
    display();
    p=bubble_sort(a);
    if(p==-1)
    cout<<"\nAlready sorted array";
    cout<<"\nSorted Linked List : ";
    display();


    return 0;
}
