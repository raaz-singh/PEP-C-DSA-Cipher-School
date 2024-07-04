#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int s){
        size = s;
        arr = new int[size];  //Dynamic Array
        top = -1;
    }

    void push(int val){
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if (top == - 1)
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        
        top--;
    }

    int peek(){
        if (top >= 0)
        {
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1; 
        }
        return arr[top];
    }
};

int main(){
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);

    // cout << st.peek();
    st.pop();
    st.pop();
    cout << st.peek();
}