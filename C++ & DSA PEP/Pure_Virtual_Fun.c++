//Pure Virtual Function
//If a function doesn't have any use in the base classbut the function must be implemented by all its derived class.
// A class that contains a pure virtual function 
#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    virtual void salary() = 0;     //Pure Virtual
};

class FullTime : public Employee{
    public:
    void salary(){
        cout << "20000" << endl;
    }
};
class Contractual : public Employee{
    public:
    void salary(){
        cout << "50000" << endl;
    }
};

int main(){
    FullTime f1;
    Contractual c1;
    Employee *ptr = &f1;
    ptr->salary();
    ptr = &c1;
    ptr->salary();
}