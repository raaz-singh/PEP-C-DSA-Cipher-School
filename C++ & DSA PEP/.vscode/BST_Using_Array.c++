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

Node* sortedArray(int arr[], int s, int e) {
    if (s > e) return NULL;
    int mid = (s + e) / 2;
    Node* root = new Node(arr[mid]);
    root->Left = sortedArray(arr, s, mid - 1);
    root->Right = sortedArray(arr, mid + 1, e);
    return root;
}

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->Left);
    cout << root->data << " ";
    inorderTraversal(root->Right);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = sortedArray(arr, 0, n - 1);

    inorderTraversal(root);

    return 0;
}