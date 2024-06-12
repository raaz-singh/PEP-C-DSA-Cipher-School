#include<bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

float add (float d, float e){
    return d + e;
}

int add (int a, int b, int c){
    return a + b + c;
}

int main(){
    int a, b, c;
    float d, e;
    cin >> a >> b >> c;
    cin >> d >> e;
    
    int result = add(a, b);
    float resultt = add(d, e);
    int sum = add(a, b, c);

    cout << "The sum is: " << result <<endl;
    cout << "The sum is: " << resultt <<endl;
    cout << "The sum is: " << sum <<endl;
    
}