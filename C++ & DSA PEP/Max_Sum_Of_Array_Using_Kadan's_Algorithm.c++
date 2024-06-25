#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int size){
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<< maxSubArray(arr, 8);

    return 0;
}