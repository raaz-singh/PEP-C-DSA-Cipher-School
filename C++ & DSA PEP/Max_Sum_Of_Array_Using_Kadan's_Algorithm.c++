#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int size) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < size; i++) {
        currentSum += arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maxSubArray(arr, 8) << endl;

    return 0;
}
