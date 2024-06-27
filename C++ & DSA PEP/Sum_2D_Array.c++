#include<bits/stdc++.h>
using namespace std;

int Sum(int arr[][4], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main(){
    int row = 3, col = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 7, 5};

    cout << Sum(arr, row, col) << " ";
}