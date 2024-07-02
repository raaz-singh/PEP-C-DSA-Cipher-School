#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void Display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 15);
    insertAtTail(head, 25);
    insertAtTail(head, 35);
    insertAtTail(head, 45);
    Display(head);
}