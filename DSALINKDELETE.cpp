#include <stdio.h>
#include <malloc.h>

struct node

{
    int data;
    struct node*next;
};

 struct node*head;

void delete(node*curr)
{
    node*tmp;
    tmp=curr->next;
    tmp->next=curr->next;
    free(tmp);
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
