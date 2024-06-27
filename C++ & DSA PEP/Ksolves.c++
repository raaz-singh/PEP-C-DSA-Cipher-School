#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for (int j = 0; j < 3; j++)
    {
        for (int i = 2; i >= 0; i--)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}