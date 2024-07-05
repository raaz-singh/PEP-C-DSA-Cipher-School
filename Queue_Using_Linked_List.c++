#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string data;
    Node* next;
    
    Node(string val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;
    
public:
    Queue() : front(nullptr), rear(nullptr) {}
    
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    
    void enqueue(string val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << std::endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }
    
    std::string peekFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return "";
        }
        return front->data;
    }
    
    string peekRear() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return "";
        }
        return rear->data;
    }
    
    bool isEmpty() {
        return front == nullptr;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;
    
    queue.enqueue("Pro");
    queue.enqueue("Raaz");
    queue.enqueue("Vishal");

    queue.display();
    
    cout << "Front element is: " << queue.peekFront() << endl;
    cout << "Rear element is: " << queue.peekRear() << endl;
    
    queue.dequeue();
    queue.display();
    
    return 0;
}


// void insertAtBottom(stack<int> &stack, int num ){
//     if(stack.empty()){
//         stack.push(num);
//         return;
//     }
//     int num1 = stack.top();
//     stack.pop();
//     insertAtBottom(stack, num);
//     stack.push(num1);
// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     if(stack.empty()) return;

//     int num = stack.top();

//     stack.pop();

//     reverseStack(stack);
//     insertAtBottom(stack, num);
// } for reversing the stack using recurrsion