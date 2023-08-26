#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


Node* createTree(Node* root){

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data == 0){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = createTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = createTree(root->right);
    cout<<endl;
    return root;
}


void preOrderTraversal(Node* root){
    Node* temp = root;

    if(temp == NULL){
        return;
    }
    
    cout<<temp->data<<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}


void inOrderTraversal(Node* root){
    Node* temp = root;

    if(temp == NULL){
        return;
    }

    inOrderTraversal(temp->left);
    cout<<temp->data<<" ";
    inOrderTraversal(temp->right);
}


void postOrderTraversal(Node* root){
    Node* temp = root;

    if(temp == NULL){
        return;
    }
    
    postOrderTraversal(temp->left);
    postOrderTraversal(temp->right);
    cout<<temp->data<<" ";
}


int main()
{
    Node* root = NULL;
    root = createTree(root);

    // 1 3 7 0 0 11 0 0 5 17 0 0 0

    cout<<"Pre Order Traversal: ";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"In Order Traversal: ";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Post Order Traversal: ";
    postOrderTraversal(root);
    cout<<endl<<endl;
    
    return 0;
}
