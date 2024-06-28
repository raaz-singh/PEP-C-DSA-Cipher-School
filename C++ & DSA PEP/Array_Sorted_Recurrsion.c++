#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }else{
        return isSorted(arr + 1, size - 1);
    }
}

int main(){
    int arr[] = {6, 3, 4, 5, 2, 1};
    int result = isSorted(arr, 6);
    cout << result << endl;
}