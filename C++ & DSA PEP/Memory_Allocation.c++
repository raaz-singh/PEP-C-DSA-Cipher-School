/* -> Each variable uses space on computer's memory to store its value
   -> */

    // Static memory allocation 
    // In this, size and location where variable will be stored is fixed during compile time but the actual physical memory is allocated only at run time
    // Static memory allocation is slightly faster than dynamic
    // Allocation and deallocation is done by compiler itself



//Dynamic 2D array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Size Of Array" << endl;
    cin >> n;

    int **arr = new int*[n];

    cout << "Enter elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    delete []arr;
}