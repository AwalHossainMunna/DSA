
/* Question: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055 */

/* 

        1
    3       5
  7  11   17  NULL

*/


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


void inOrderTraversal(Node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }
    
    inOrderTraversal(root->left, count);
    if ((root->left == NULL) && (root->right == NULL))
    {
        count++;
    }
    inOrderTraversal(root->right, count);
}


int main()
{
    Node *root = NULL;
    root = createTree(root);
    // 1 3 7 0 0 11 0 0 5 17 0 0 0
    int count = 0;
    
    cout<<endl;
    // PreOrder, InOrder, PostOrder any traversal can be applied
    inOrderTraversal(root, count);
    cout<<"Total leaf nodes are: "<<count<<endl;

    return 0;
}
