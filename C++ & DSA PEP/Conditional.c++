#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "A is greater number than others: " << a << endl;
    }
    else if(b > a && b > c){
        cout << "B is greater number than others: " << b <<endl;
    }else{
        cout << "C is greater number than others: " << c << endl;
    }
    
}