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

void sumReplace(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    sumReplace(root->Left);
    sumReplace(root->Right);

    if (root->Left != NULL)
    {
        root->data += root->Left->data;
    }
    if (root->Right != NULL)
    {
        root->data += root->Right->data;
    }
}

void printTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    printTree(root->Left);
    printTree(root->Right);
}

int main()
{
    Node *root = new Node(9);
    root->Left = new Node(31);
    root->Right = new Node(18);
    root->Left->Left = new Node(19);
    root->Left->Right = new Node(3);

    sumReplace(root);
    cout << "Tree after sum replacement: ";
    printTree(root);
    cout << endl;

    return 0;
}