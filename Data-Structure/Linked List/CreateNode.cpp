#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void Listprint(struct Node *ptr){

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    struct Node *head,*middle,*last;

    head=(struct Node*)malloc(sizeof(struct Node));
    middle=(struct Node*)malloc(sizeof(struct Node));
    last=(struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = middle;

    middle->data = 20;
    middle->next = last;

    last->data = 30;
    last->next = NULL;

    Listprint(head);

    return 0;
}
