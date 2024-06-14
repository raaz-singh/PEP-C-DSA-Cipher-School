#include<bits/stdc++.h>
using namespace std;

class base{
    public: 
    void print(){
        cout << "Base class Called" << endl;
    }
};

class Derived : public base{
    public:
    void print(){
        cout << "From Derived " << endl;
    }
};

int main(){
    Derived d1;
    // d1.print();
    // d2.base :: print();
    base *ptr = &d1;
    ptr -> print();
}