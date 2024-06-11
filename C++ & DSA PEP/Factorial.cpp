#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mul;
    cout << "Enter The Number " << endl;
    cin >> n;
    mul = 1;

    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    cout << mul << endl;
}