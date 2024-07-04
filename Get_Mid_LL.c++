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

void insertAtTail(Node* &head, int val){

    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

Node* findMiddle(Node* head){
    if (head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast -> next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* kReverse(Node* head, int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    return prev;
}

void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    } cout << "NULL" << endl;
}

int main(){

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);


    Node* middle = findMiddle(head);
    if (middle != NULL) {
        cout << "Middle node value: " << middle->data << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    head = kReverse(head, 3);
    display(head);
}