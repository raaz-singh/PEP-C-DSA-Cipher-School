#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }
    for (int i = count; i < n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}