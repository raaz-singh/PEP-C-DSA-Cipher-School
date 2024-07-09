#include <iostream>
#include <queue>
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

int printLevelOrder(Node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    // First we will create a queue and push root and NULL
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp != NULL)
        {
            if (level == k)
            {
                sum += temp->data;
            }
            if (temp->Left)
            {
                q.push(temp->Left);
            }
            if (temp->Right)
            {
                q.push(temp->Right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftCount = countNodes(root->Left);
    int rightCount = countNodes(root->Right);

    return countNodes(root->Left) + countNodes(root->Right) + 1;
}

int sumNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sumNodes(root->Left) + sumNodes(root->Right) + root->data;
}

int calculateHeight(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    
    int leftCount = calculateHeight(root->Left);
    int rightCount = calculateHeight(root->Right);

    int a = max(leftCount, rightCount);

    return a+1;
}

int main()
{
    Node *root = new Node(9);
    root->Left = new Node(31);
    root->Right = new Node(18);
    root->Left->Left = new Node(19);
    root->Left->Right = new Node(3);
    cout << "The Sum of level is: " << printLevelOrder(root, 2) << endl;
    cout << "The no. of Nodes are: " << countNodes(root) << endl;
    cout << "The Sum of Nodes are: " << sumNodes(root) << endl;
    cout << "The height of the tree is: " << calculateHeight(root) << endl;
    return 0;
}