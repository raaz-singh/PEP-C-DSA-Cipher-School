// It allows ud to create class(derived class/ child class) from an existing class(base class)
// The child class inherit the features from the parent class and can also have additional features of its own.
// Public members is accessable everywhere in the derived class either the class is private or protected.
// Protected members is accessable in the derived class either the class is private or protected but after accessing from the parent class all the members become protected automatically.
// Private memebrs is not accessable in the derived class either the class is private or protected.

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
    protected:
    void method(){
        cout << "Protected Calling..." << endl;
    }
};

class dog : public Animal{
    public:
    void bark(){
        cout << "Barking..." << endl;
    }

    void m1(){
    method();
    }
};

int main(){
    dog d1;
    d1.eat();
    d1.bark();
    d1.m1();
}