#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size=5;
    int sLarge=-1;
    int arr[size]={5,3,4,8,5};
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]> max)
        {
            max=arr[i];
        }
        
    }
    cout<<max << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sLarge && arr[i] < max )
        {
            sLarge=arr[i];
        }
        
    }
    cout << sLarge << endl;
}