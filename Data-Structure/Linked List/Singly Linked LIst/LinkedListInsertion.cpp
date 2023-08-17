#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class SinglyLinkedList{
    public:
    Node *head;
    Node *tail;

    SinglyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    
    //Function to insert at Head
    void insertAtHead(int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
        return;
    }
    
    //Function to insert at End
    void insertAtEnd(int d)
    {
        Node *newNode = new Node(d);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        tail = newNode;
        return;
    }

    // Function to insert at any position
    void insertAtPosition(int pos, int d)
    {
        Node *temp = head;

        // insert at the first position
        if (pos == 0)
        {
            insertAtHead(d);
            return;
        }

        // insert at the last position
        if (temp->next == NULL)
        {
            insertAtEnd(d);
            return;
        }

        int i = 1;

        while (i != pos)
        {
            temp = temp->next;
            i++;
        }

        Node *newNode = new Node(d);

        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

    // Function to insert before a Node
    void insertBeforeNode(int pos, int d)
    {
        Node *temp = head;
        Node* preTemp;

        int i = 0;

        while (i != pos)
        {
            preTemp = temp;
            temp = temp->next;
            i++;
        }

        Node* newNode = new Node(d);
        newNode->next = temp;
        preTemp->next = newNode;
        return;
    }

    // Function to insert after a Node
    void insertAfterNode(int pos, int d)
    {
        Node *temp = head;

        int i = 0;

        while (i != pos)
        {
            temp = temp->next;
            i++;
        }

        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

    //display function
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};



int main()
{
    SinglyLinkedList sll;

    sll.insertAtHead(5);
    sll.insertAtHead(4);
    sll.insertAtHead(3);

    sll.insertAtEnd(6);
    sll.insertAtEnd(7);
    sll.insertAtEnd(8);

    sll.insertAtPosition(6, 22);
    sll.insertAfterNode(2,9);
    sll.insertBeforeNode(1,50);

    sll.display();

    return 0;
}
