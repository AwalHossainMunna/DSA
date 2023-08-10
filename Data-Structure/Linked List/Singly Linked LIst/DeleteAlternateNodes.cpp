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
        cout<<temp->data<<" ";
        temp = temp-> next;
    }     
}

void deleteAlternateNodes(Node* &head){

    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }   
}


int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    
    push_back(tail,2);
    push_back(tail,3);
    push_back(tail,4);
    push_back(tail,5);
    push_back(tail,6);
    push_back(tail,7);
    push_back(tail,8);

    deleteAlternateNodes(head);
    print(head);
    
    return 0;
}
