#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

void reverse(int arr[], int size){
    cout << "The reverse of the array is: " << endl;
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[7] = {2, 5, 9, 6, 3 ,1 ,8};
    bool result = linearSearch(arr, 7, 3);
    cout << result << endl;
    reverse(arr, 7);
}