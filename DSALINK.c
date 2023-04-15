#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};

 struct node*head;

void insert(node*curr)
{
    node*tmp;
    tmp=(node*)malloc(sizeof(node));
    tmp->next=curr->next;
    curr->next=tmp;
}


int main()
{
   
head=(struct node*)malloc(sizeof(struct node));

struct node*head=NULL;
struct node*second=NULL;
struct node*third=NULL;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
head->data=20;
head->next=second;


 
 
return 0; 
}
