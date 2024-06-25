#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    while (start <= end)
    {
        if (key > arr[mid])
        {
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    
    return -1;
}

int main(){
    int arr[10] = {0, 2, 5, 8, 9, 6, 3, 1, 4, 7};
    int key = 3;
    sort(arr, arr+10);
    int found = binarySearch(arr, 10, key);
    cout << found << endl;
}