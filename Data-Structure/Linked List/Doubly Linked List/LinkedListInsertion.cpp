#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public:

    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int d){

        Node* newNode = new Node(d);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        head->prev = newNode;
        newNode->next = head;
        head = newNode; 
        return;
    }

    void insertAtEnd(int d){

        Node* newNode = new Node(d);
        if(tail == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        return;
    }

    
    void insertAtPosition(int d, int pos)
    {
        Node *temp = head;
        if (pos == 0)
        {
            insertAtHead(d);
            return;
        }

        int currPos = 1;
        while (currPos != pos)
        {
            temp = temp->next;
            currPos++;
        }

        Node *newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;

        newNode->prev = temp;
        newNode->next->prev = newNode;
        return;
    }


    void display(){

        Node* temp = head;
        cout<<"NULL<->";
        while(temp != NULL){
            cout<<temp->data<<"<->";
            temp = temp->next;
        }cout<<"NULL";
    }
};


int main()
{
    DoublyLinkedList dll;
    dll.insertAtHead(5);
    dll.insertAtHead(4);
    dll.insertAtHead(3);

    dll.insertAtEnd(6);
    dll.insertAtEnd(7);
    dll.insertAtEnd(8);

    dll.insertAtPosition(15, 0);

    dll.display();
    
    return 0;
}
