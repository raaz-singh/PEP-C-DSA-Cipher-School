#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vec, int start, int mid, int end){
    vector<int> temp;
    int left = start;
    int right = mid + 1;
    while(left <= mid && right <= end){
        if(vec[left] <= vec[right]){
            temp.push_back(vec[left++]);
        }else{
            temp.push_back(vec[right++]);
        }
    }
    while(left <= mid){
        temp.push_back(vec[left++]);
    }
    while(right <= end){
        temp.push_back(vec[right++]);
    }

    for (int i = start; i <= end; ++i) {
        vec[i] = temp[i - start];
    }
    
}

void mergeSort(vector<int> &vec, int start, int end){
    if(start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(vec, start, mid);
    mergeSort(vec, mid+1, end);
    merge(vec, start, mid, end);
}

int main(){
    vector<int> vec = {3, 2, 8, 5, 1, 4, 10};
    int n = 7;
    cout << "Before Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    mergeSort(vec, 0, n-1);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}





#include <iostream>
using namespace std;

class Solution {
public:
    void merge(int arr[], int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int* left = new int[n1];
        int* right = new int[n2];

        for (int i = 0; i < n1; i++)
            left[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            right[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;

        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }

        delete[] left;
        delete[] right;
    }

    void mergeSort(int arr[], int l, int r) {
        if (l >= r)
            return;

        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
};

int main() {
    Solution obj;

    int arr1[] = {4, 1, 3, 9, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
