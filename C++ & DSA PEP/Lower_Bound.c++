#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] <= key)
        {
            start = mid + 1;
            // return mid;
        }

        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return size;
}

int main()
{
    int arr[6] = {3, 5, 7, 8, 15};
    int ind = lowerBound(arr, 5, 6);
    cout << ind;
    return 0;
}