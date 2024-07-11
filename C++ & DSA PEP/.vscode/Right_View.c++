#include <iostream>
#include<queue>
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

void rightView(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* curr = q.front();
            q.pop();
            
            if(i == n - 1){
                cout << curr->data << " ";
            }
            if(curr->Left != NULL){
                q.push(curr->Left);
            }
            if(curr->Right != NULL){
                q.push(curr->Right);
            }
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->Left = new Node(2);
    root->Right = new Node(3);
    root->Left->Left = new Node(4);
    root->Left->Right = new Node(5);
    root->Right->Right = new Node(6);
    root->Left->Right->Left = new Node(7);

    rightView(root);

    return 0;
}