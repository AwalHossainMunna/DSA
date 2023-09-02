#include <bits/stdc++.h>
using namespace std;
 
class Node{ 
    public:

    int data; 
    Node *next;

    Node(int val)
    {
        this.data = val;
        this.next = NULL;
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
    
    //Function to delete Node at Head
    void deleteAtHead()
    {

        Node *temp = head;
        head = head->next;
        free(temp);
    }

    //Function to delete Node at End
    void deleteAtEnd()
    {

        Node *secondLast = head;

        while (secondLast->next->next != NULL)
        {
            secondLast = secondLast->next;
        }

        Node *temp = secondLast->next;
        secondLast->next = NULL;
        free(temp);
    }

    //Function to delete Node at any position
    void deleteAtPosition(int pos){

    if(pos == 0){
        deleteAtHead();
        return;
    }
    
    int curr_pos = 1;
    Node* prev = head;

    while(curr_pos != pos){
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

    sll.deleteAtHead();
    sll.deleteAtEnd();
    sll.deleteAtPosition(2);

    sll.display();

    return 0;
}
