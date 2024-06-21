#include<bits/stdc++.h>
using namespace std;

// Second Approach               Study Kadan's Algorithm
string pairSum(int arr[], int size, int target){
    sort(arr[0], arr[size]);
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        int sum;
        sum = arr[i] + arr[j];
        if (sum == target)
        {
            return "Yes";
        }else if (sum < target)
        {
            i++;
        }else{
            j--;
        }
    }
    return "No";
}

int main(){
    // int arr[] = {5, 3, 1, 2};
    // int target = 7;
    // bool found = false;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = i + 1; j < 4; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (found) break;
    // }
    // if (found)
    // {
    //     cout << "True" << endl;
    // }else{
    //     cout << "False" << endl;
    // }
    
}