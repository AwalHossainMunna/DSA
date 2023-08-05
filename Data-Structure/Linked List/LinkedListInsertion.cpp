#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
 
    //constructor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};


// Function to insert at the beginning
void insertAtBeginning(Node* &head, int d){
    //new node create 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


// Function to insert at End
void insertAtEnd(Node* &tail, int d){

    //new node create 
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void print(Node* head){
    Node* temp;
    temp = head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp-> next;
    }     
}
 
int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtBeginning(head,12);
    insertAtEnd(tail,16);

    print(head);

    return 0;
}
