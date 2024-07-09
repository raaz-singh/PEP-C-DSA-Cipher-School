#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    string name;
    Node* Left;
    Node* Right;

    Node(string val){
        name = val;
        Left = NULL;
        Right = NULL;
    }
};

void printLevelOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    // First we will create a queue and push root and NULL
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if (temp != NULL)
        {
            cout << temp->name << " ";
            if (temp->Left)
            {
                q.push(temp->Left);
            }
            if (temp->Right)
            {
                q.push(temp->Right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

int main(){
    Node* root = new Node("Pro");
    root->Left = new Node("Roubin");
    root->Right = new Node("RA");
    root->Left->Left = new Node("SN");
    root->Left->Right = new Node("SN1");
    printLevelOrder(root);
}