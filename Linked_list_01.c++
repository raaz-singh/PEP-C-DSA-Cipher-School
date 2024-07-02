#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int val){
        data = val;
        next = NULL;
    } 

};

void insertAtTail(Node* &head, int val){

    //creating a new node in which data feild will have val and next will point at NULL
    Node* n = new Node(val);

    //if there is no node in LL
    if(head == NULL){
        head = n;
        return;
    }

    //Iterate LL from begin to end with a pointer which in initially point at head
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);

    n->next = head;
    head = n;
}

bool search(Node* head, int key){
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == key) return true;
        temp = temp->next;
    }   
    return false;
}

void deletion(Node* &head, int val){
    Node* temp = head;

    while(temp->next->data != val){
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

}

void deleteAtHead(Node* head){
    Node* nodeToDelete = head;
    head = head->next;
    delete nodeToDelete;
}

void display(Node* head){
    //Taking a pointer bcz we will not modify head
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    } cout << "NULL" << endl;
}

void reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main(){

    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    insertAtHead(head, 10);
    insertAtHead(head, 20);

    
    display(head);

    reverse(head);
    display(head);
}