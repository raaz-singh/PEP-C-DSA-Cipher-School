//Time Complexity -> It is the amount of time taken by an algorithm to run as a function of length of the input.
// Big O -> Worst Case,   Theta -> Average Case,    Omega -> Best Case


//First Occurence
#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
    {
        ans = mid;
        end = mid - 1;
    }
    else if (key < arr[mid])
    {
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
        mid = (start + end) / 2;
    }
    return ans;
}

int main(){
    int arr[6] = {1, 2, 2, 3, 3, 3};
    int key = 2;
    // sort (arr, arr+6);
    int found = BinarySearch(arr, 5, key);
    cout << found << endl;
}



// Lower Bound
//-> Given a sorted array of N integer and an in integer x, find lower bound of x.

// Lower bound algo find the first or the smallest index in a sorted array where the value at that given index is greater than or equal to a given key i.e -> x;