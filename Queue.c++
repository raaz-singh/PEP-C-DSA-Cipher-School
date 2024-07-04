#include<iostream>
using namespace std;

class Queue {
public:
    int* arr;
    int front;
    int rear;
    int size;

    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val) {
        if (rear == size - 1) {
            cout << "Queue overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow" << endl;
            return;
        }
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }

    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.peek() << endl;

    q.dequeue();
    cout << "Front element after one dequeue: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element after all dequeues: " << q.peek() << endl;

    return 0;
}
