#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
 
    Node(int val){
        data = val;
        next = NULL;
    }
};


void push_back(Node* &tail, int d){

    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}


void print(Node* head){
    Node* temp;
    temp = head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp-> next;
    }     
}


void deleteAtHead(Node* &head){

    Node* temp = head;
    head = head->next;
    free(temp);
}


void deleteAtEnd(Node* &head){

    Node* secondLast = head;
    
    while(secondLast->next->next != NULL){
        secondLast = secondLast->next;
    }

    Node* temp = secondLast->next;
    secondLast->next = NULL;
    free(temp);
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    push_back(tail,45);
    push_back(tail,37);

    deleteAtHead(head);
    deleteAtEnd(head);
    print(head);

    return 0;
}
