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

    SinglyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        cout<<"NULL"<<;
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};


int main()
{

    DoublyLinkedList dll;

    dll.display();

    return 0;
}
