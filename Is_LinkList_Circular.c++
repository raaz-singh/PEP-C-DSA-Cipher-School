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

bool isCircular(Node* head){
    if (head == NULL)
    {
        return true;
    }
    Node* temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    return (temp == head);
}

Node* floydDetectLoop(Node* head){
    if (head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if (head == NULL)
    {
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    if (intersection == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if (head == NULL) return;

    Node* startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL) return; // No loop

    Node* temp = startOfLoop;
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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

int main(){
    Node* head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);

    cout << "Original Circular Linked List: ";
    Display(head);

    if (isCircular(head))
    {
        cout << "The linked list is circular." << endl;
    }
    else
    {
        cout << "The linked list is not circular." << endl;
    }

    removeLoop(head);

    cout << "Linked List after removing loop: ";
    Display(head);

    return 0;
}
