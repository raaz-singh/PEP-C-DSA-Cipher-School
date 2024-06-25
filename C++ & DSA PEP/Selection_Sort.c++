#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[min], arr[i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 2, 10, 8, 6, 1};
    SelectionSort(arr, 6);
}