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

    void insertAtStart(int val){

        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }


    void display(){

        Node* temp;
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
    
    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);

    dll.display();

    return 0;
}
