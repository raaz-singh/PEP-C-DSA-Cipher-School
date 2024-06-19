#include<bits/stdc++.h>
using namespace std;

class A
{
private:
    int numA;

    friend class B;
public:
    A(){
        numA = 5;
    }
};

class B
{
    private:
    int numB;
    public:
    B(){
        numB = 10;
    }
    int add(){
        A a1;
        a1.numA;
        return a1.numA + numB;
    }
};

int main(){
    B b1;
    cout << b1.add() << endl;
}