#include<bits/stdc++.h>
using namespace std;

void getMax(int arr[], int size){
    int max = INT_MIN;
    cout << "The numbers are: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
        
    }
    cout << max << endl;
}

int main(){
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getMax(arr, n);    
}