
/* Question: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055 */


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *createTree(Node *root)
{
    cout << "Enter data" << endl;
    int data;
    cin >> data;

    root = new Node(data);
    Node *temp = root;

    if (data == 0)
    {
        return NULL;
    }

    cout << "Enter data left of " << data << endl;
    temp->left = createTree(temp->left);
    cout << "Enter data right of " << data << endl;
    temp->right = createTree(temp->right);

    return root;
}


void countLeafNodes(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    
    countLeafNodes(root->left, count);
    if ((root->left == NULL) && (root->right == NULL))
    {
        count++;
    }
    countLeafNodes(root->right, count);
}


int main()
{
    Node *root = NULL;
    root = createTree(root);
    int count = 0;
    
    cout<<endl;
    // PreOrder, InOrder, PostOrder any traversal can be applied
    countLeafNodes(root, count);
    cout<<"Total leaf nodes are: "<<count<<endl;

    return 0;
}
