#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        int hasSwapped = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                hasSwapped = 1;
            }
        }
        if (hasSwapped == 0)
        {
            break;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 8, 5, 6};
    BubbleSort(arr, 6);
}