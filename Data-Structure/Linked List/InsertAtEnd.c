
#include<stdio.h>
#include<stdlib.h>

struct node{
    int a;
    struct node* next;
};

void linkedListTraversal(struct node *temp){

    while(temp!=NULL){
        printf("%d\n",temp->a);
        temp=temp->next;
    }
} 
  

struct node *insertAtEnd(struct node *head, int data){

    struct node *newnode,*temp;
    newnode= (struct node*)malloc(sizeof(struct node));

    newnode->a= data;
    temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->next=NULL;

    return head;
}


void main()
{
    struct node *head,*second,*third,*fourth;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    
    head->a=5;
    head->next= second;

    second->a= 10;
    second->next= third;

    third->a= 7;
    third->next= fourth;

    fourth->a= 19;
    fourth->next= NULL;
    
    head = insertAtEnd(head,56);
    linkedListTraversal(head);

}

