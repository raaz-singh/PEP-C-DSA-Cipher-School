#include<bits/stdc++.h>
#include<set>
using namespace std;

int uniqueElements(int arr[], int size){
    int i = 0;

    for (int j = i+1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
        
    }
    return i;
}

int main(){
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int k = uniqueElements(arr, 7);
    for(int i = 0; i <= k; i++){
        cout << arr[i] << " ";
    }
}