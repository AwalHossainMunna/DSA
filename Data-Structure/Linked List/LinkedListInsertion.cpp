#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
 
    //constructor
    Node(int data){
        data= data;
        next= NULL;
    }
};


// Function to insert at beginning
void insertAtBeginning(Node* &head, int d){
    //new node create 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


void insertAtEnd(Node* &tail, int d){

    //new node create 
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    // insert at first position
    if(position == 1){
        insertAtBeginning(head,d);
        return;
    }

    Node* temp = head;
    int i=1;

    while(i<position-1){
        temp = temp->next;
        i++;
    }

    // insert at last position
    if(temp->next == NULL){
        insertAtEnd(tail,d);
        return;
    }

    // Create new node
    Node* newNode = new Node(d);

    newNode->next = temp->next;
    temp->next = newNode;

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
    insertAtPosition(head,tail,4,22);

    print(head);

    return 0;
}
