#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks1, marks2, marks3, total;
    float percent;
    cout << "Enter marks" << endl;
    cin >> marks1 >> marks2 >> marks3;
    total = marks1 + marks2 + marks3;

    percent = (total / 300.0) * 100;
    if (percent >= 60)
    {
        cout << "Passed " << percent << "%" << endl;
    }else{
        cout << "Fail " << percent << "%" << endl;
    }
    
}