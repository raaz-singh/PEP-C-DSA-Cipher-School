#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> v1 = {{1, 2, 3}, {4, 5}, {6, 7, 8}};
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
}