
/*

        1
    3       5
  7  11   17  NULL

*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    int data;
    cin >> data;

    if (data == 0)
    {
        return NULL;
    }

    root = new Node(data);
    cout << "Enter data left of: " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data right of: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // previous level has traversed completely
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data: " << endl;
    root = buildTree(root);
    // 1 3 7 0 0 11 0 0 5 17 0 0 0
    levelOrderTraversal(root);

    return 0;
}
