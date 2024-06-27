#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[][4], int row, int col){
    int max = INT_MIN;
    int sum, count = -1;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            count = i;
        }
        
    }
    cout << count << endl;
    return max;
}

int main(){
    int row = 3, col = 4;
    int arr[3][4] = {10, 2, 30, 4, 5, 16, 17, 8, 19, 10, 11, 12};

    cout << Sum(arr, row, col) << " ";
}