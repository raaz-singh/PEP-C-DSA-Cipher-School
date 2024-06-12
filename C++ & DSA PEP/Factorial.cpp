#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    return num / dem;
}

int main(){
    int n, r;
    cout << "Enter The Number " << endl;
    cin >> n >> r;
    int result = nCr(n, r);
    cout << "The factorial of the given number is: " << result << endl;
}