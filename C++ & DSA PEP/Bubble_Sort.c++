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

    cout << "After sorting: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    BubbleSort(arr, n);
}