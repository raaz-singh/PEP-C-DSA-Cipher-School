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

Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->Left = insert(root->Left, val);
    else
        root->Right = insert(root->Right, val);

    return root;
}

Node* minValueNode(Node* root) {
    Node* temp = root;
    while (temp && temp->Left != NULL) {
        temp = temp->Left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val) {
    if (root == NULL) return root;

    if (root->data == val) {
        if (root->Left == NULL && root->Right == NULL) {
            delete root;
            return NULL;
        }
        if (root->Left != NULL && root->Right == NULL) {
            Node* temp = root->Left;
            delete root;
            return temp;
        }
        if (root->Left == NULL && root->Right != NULL) {
            Node* temp = root->Right;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->Right);
        root->data = temp->data;
        root->Right = deleteFromBST(root->Right, temp->data);
    } else if (root->data > val) {
        root->Left = deleteFromBST(root->Left, val);
    } else {
        root->Right = deleteFromBST(root->Right, val);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->Left);
    cout << root->data << " ";
    inorderTraversal(root->Right);
}

int main() {
    Node* root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 7);

    cout << "Inorder traversal before deletion: ";
    inorderTraversal(root);
    cout << endl;

    root = deleteFromBST(root, 3);
    cout << "Inorder traversal after deletion: ";
    inorderTraversal(root);
    cout << endl;
    return 0;
}