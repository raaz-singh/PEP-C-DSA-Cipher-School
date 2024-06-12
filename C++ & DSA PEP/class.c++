// Constructor method is a special method that is called automatically when an object is created
// Constructor has same name as that of class. It does not have any return type.

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int registration;       //Data members

    void printname(){
        cout << "Name is: " << name << endl;
    }
};

int main(){
    Student st1, st2, st3;
    st1.name = "Raaz";
    st1.age = 22;
    st1.registration = 12307401;

    st2.name = "Vikas";
    st2.age = 24;
    st2.registration = 1230745;

    st3.name = "Abhiroop";
    st3.age = 23;
    st3.registration = 12307854;

    st1.printname();
    st2.printname();
    st3.printname();
}