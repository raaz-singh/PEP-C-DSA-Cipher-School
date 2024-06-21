// Set -> 1) Unique elements no two elements in a set can be equal
// 2) Immutable -> We can add or remove elements from a set, but we can't change the values of existing elements.
// 3) Sorted Order -> By default order is increasing but we have an option to change that
// 4) Order Set

#include<bits/stdc++.h>
using namespace std;

int main(){
    // set<int> set1 = {3, 8, 1, 4, 9};   For ascending Order

    set<int, greater<int>> set1 = {3, 8, 1, 4, 9}; // For decendening order
    set1.insert(50);
    set1.erase(1);

    // set1.clear(); // Deleting all the elements from the set
    for (int i : set1){
        cout << i << " ";
    }
    cout << endl;
    cout << set1.size() << endl;
}