#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<string> set1 = {"Raaz", "Pro"};
    set1.insert("Subhojit");
    for(string r : set1){
        cout << r << " ";
    }
}