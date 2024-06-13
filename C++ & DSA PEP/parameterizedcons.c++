#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    int age;
    string name;

    person(int Age, string Name){
        age = Age;
        name = Name;
    }
    void print(){
        cout << "Employee Id is: " << age << " Employee Name is: " << name << endl;
    }
    ~person(){
        cout << "Desttructor Called" << endl;
    }
};

int main(){
    person pr(101,"Roubin");
    pr.print();
}