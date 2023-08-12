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

    void deleteAlternateNodes()
    {
        Node *curr_node = head;
        while (curr_node != NULL && curr_node->next != NULL)
        {
            Node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node = curr_node->next;
        }
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

    sll.deleteAlternateNodes();

    sll.display();

    return 0;
}
