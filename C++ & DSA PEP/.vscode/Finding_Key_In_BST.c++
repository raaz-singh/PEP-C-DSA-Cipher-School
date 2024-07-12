#include<iostream>
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

bool findKey(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;

    if (key > root->data) {
        return findKey(root->Right, key);
    } else {
        return findKey(root->Left, key);
    }
}

Node* minValueNode(Node* root) {
    Node* temp = root;
    while (temp && temp->Left != NULL) {
        temp = temp->Left;
    }
    return temp;
}

Node* maxValueNode(Node* root) {
    Node* temp = root;
    while (temp && temp->Right != NULL) {
        temp = temp->Right;
    }
    return temp;
}

int main() {
    Node* root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 2);
    insert(root, 7);

    cout << "Key 7 found: " << (findKey(root, 7)) << endl;
    cout << "Minimum value in the BST: " << minValueNode(root)->data << endl;
    cout << "Maximum value in the BST: " << maxValueNode(root)->data << endl;

    return 0;
}