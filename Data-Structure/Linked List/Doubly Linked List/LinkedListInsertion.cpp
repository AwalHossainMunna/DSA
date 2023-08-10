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


void updateAtPosition(Node* &head, int position, int val){

    int curr_pos = 0;
    Node* temp = head;

    while(curr_pos != position){
        temp = temp->next;
        curr_pos++;
    }
    temp->data = val;
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    push_back(tail,45);
    push_back(tail,37);
    push_back(tail,33);

    updateAtPosition(head,1,3);
    print(head);
    
    return 0;
}
