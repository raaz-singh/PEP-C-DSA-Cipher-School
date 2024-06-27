#include<bits/stdc++.h>
using namespace std;

bool isKeyPresent(int arr[][4], int target, int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    int row = 3, col = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 7, 5};

    cout << isKeyPresent(arr, 7, row, col) << " ";
}