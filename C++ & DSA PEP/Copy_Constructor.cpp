#include<bits/stdc++.h>
using namespace std;

class employee{
    public:
    int id;
    string name;

    employee(int id1, string empName){
        id = id1;
        name = empName;
    }

    employee(employee &obj){
        id = obj.id;
        name = obj.name;
    }

    void print(){
        cout << "Employee id is: " << id << " and the name is : " << name << endl;
    }
};

int main(){
    employee e1(101, "Raaz");
    employee e2(e1);
    e1.print();
    e2.print();
}