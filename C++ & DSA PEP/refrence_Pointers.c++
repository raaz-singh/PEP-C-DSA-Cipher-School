#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "Pro_Raaz";
    string *ptr = &x;
    string **pttr = &ptr;
    int *ptrNull = NULL;

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;     // Derefrencing the pointers
    cout << &ptr << endl;
    cout << pttr << endl;
    cout << &pttr << endl;
    cout << ptrNull << endl;
}