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

struct node *insertAtBeginning(struct node *head, int data){

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->a= data;
    newnode->next= head;
    
    return newnode;
}

void main()
{
    struct node *head,*second,*third,*fourth,*temp;
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
    
    head = insertAtBeginning(head,56);
    linkedListTraversal(head);

}
