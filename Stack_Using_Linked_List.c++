#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    
    Node(string val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;
    
public:
    Stack() : top(nullptr) {}
    
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    
    void push(string val) {
        Node* newNode = new Node(val);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
    }
    
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    string peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return "";
        }
        return top->data;
    }
    
    bool isEmpty() {
        return top == nullptr;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    
    stack.push("Hey");
    stack.push("Pro");
    stack.push("Raaz");

    stack.display();
    
    cout << "Top element is: " << stack.peek() << endl;
    
    stack.pop();
    stack.display();
    
    return 0;
}
