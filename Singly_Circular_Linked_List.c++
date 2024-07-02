#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next= head;
    head = n;
}

void insertAtEnd(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void Display(Node* head){

    if (head == NULL)
    {
        return;
    }
    
    Node* temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
        cout << endl;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node* toDelete = head;
    if (head->next == head)
    {
        head = NULL;
    }else {
        temp->next = head->next;
        head = head->next;
    }
    delete toDelete;
}

void deletion(Node* &head, int pos){
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (count != pos-1)
    {
        temp = temp->next;
        count++;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

int main(){
    Node* head = NULL;
    // insertAtHead(head, 15);
    // insertAtHead(head, 30);
    // insertAtHead(head, 45);
    // insertAtHead(head, 60);
    // insertAtHead(head, 75);

    // Display(head);

    insertAtEnd(head, 80);
    insertAtEnd(head, 95);
    Display(head);

    // deleteAtHead(head);
    // Display(head);

    deletion(head, 2);
    Display(head);
}