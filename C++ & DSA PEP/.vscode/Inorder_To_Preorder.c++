#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Left;
    Node *Right;

    Node(int val)
    {
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end, int &preorderIndex){
    if(start > end) return NULL;

    int curr = preorder[preorderIndex];
    preorderIndex++;

    Node* node = new Node(curr);

    if(start == end) return node;

    int pos = search(inorder, start, end, curr);
    node->Left = buildTree(preorder, inorder, start, pos-1, preorderIndex);
    node->Right = buildTree(preorder, inorder, pos+1, end, preorderIndex);

    return node;
}

void inorderPrint(Node* root) {
    if(root == NULL) return;
    inorderPrint(root->Left);
    cout << root->data << " ";
    inorderPrint(root->Right);
}

int main(){
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    int n = sizeof(inorder)/sizeof(inorder[0]);

    int preorderIndex = 0;
    Node* root = buildTree(preorder, inorder, 0, n-1, preorderIndex);

    inorderPrint(root);
}