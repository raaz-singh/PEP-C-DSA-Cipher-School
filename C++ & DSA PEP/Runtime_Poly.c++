//Runtime Polymorphism / Late Binding
//Virtual function is a member function in the base class that you redefine in the derived class.
//A virtual function must be defined in the base class even though it is not used
//Virtual function must be member of some class
//They are accessed through object pointers
#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "From Base" << endl;
    }
};

class Derived : public Base{
    public:
    void display(){
        cout << "From Derived" << endl;
    }
};

int main(){
    Derived d1;
    Base *ptr = &d1;
    ptr->display();
}