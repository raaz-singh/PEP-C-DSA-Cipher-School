#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val){
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

void preOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    cout << root->data << " ";
    preOrder(root->Left);
    preOrder(root->Right);
}

void inOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    inOrder(root->Left);
    cout <<  root->data << " ";
    inOrder(root->Right);
}

void postOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    postOrder(root->Left);
    postOrder(root->Right);
    cout << root->data << " ";
}

int main(){
    Node* root = new Node(9);
    root->Left = new Node(31);
    root->Right = new Node(18);
    root->Left->Left = new Node(19);
    root->Left->Right = new Node(3);

    // preOrder(root);
    // inOrder(root);
    postOrder(root);
}