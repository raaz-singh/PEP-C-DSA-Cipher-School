#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 0;
    int ctr = 0;
    int n = 6;
    int arr[] = {1, 1, 0, 0, 1, 1, 1, 0, 0, 0};

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
            ctr++;
        else
        {
            if (ctr > max)
                max = ctr;
            ctr = 0;
        }
    }
    cout << max;
    return 0;
}