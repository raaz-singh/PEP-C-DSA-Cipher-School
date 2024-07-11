/*
1) The left subtree of a node contains only nodes with keys less than nodes key
2) The right subtree of node will contain only nodes with keys greater than the nodes key
3) The left and right subtree each must be a BST. There must be no duplicates nodes
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val) {
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

Node* insertBST(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data) {
        root->Left = insertBST(root->Left, val);
    } else {
        root->Right = insertBST(root->Right, val);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->Left);
    cout << root->data << " ";
    inorder(root->Right);
}

int main() {
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    inorder(root);
    return 0;
}