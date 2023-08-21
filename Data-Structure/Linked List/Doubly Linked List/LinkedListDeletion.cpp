#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
    public:
    
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    //Function to delete at Head
    void deleteAtHead()
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return;
    }

    //Function to delete at End
    void deleteAtLast()
    {
        Node *secondLast = head;
        while (secondLast->next->next != NULL)
        {
            secondLast = secondLast->next;
        }

        Node *temp = secondLast->next;
        secondLast->next = NULL;
        return;
    }

    //Function to delete at any given position
    void deleteAtPosition(int pos)
    {
        if (pos == 0)
        {
            deleteAtHead();
            return;
        }

        int curr_pos = 1;
        Node *prev = head;

        while (curr_pos != pos)
        {
            prev = prev->next;
            curr_pos++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        free(temp);
    }

    void display()
    {

        Node *temp = head;
        cout << "NULL<->";
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

    dll.insertAtEnd(6);
    dll.insertAtEnd(7);
    dll.insertAtEnd(8);
    dll.insertAtEnd(9);
    dll.insertAtEnd(10);
    dll.insertAtEnd(11);

    dll.deleteAtHead();
    dll.deleteAtLast();
    dll.deleteAtPosition(1);

    dll.display();

    return 0;
}
