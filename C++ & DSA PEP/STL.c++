// STL -> Standard Template Library - STL provides a set of programming tools to implement algorithm and data structures like vectrs, list, queues etc.
// Iterators -> They are used to point to the memory address of a vector element, they somehow act like pointers.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> name {"Roubin", "Pro", "Vishal", "Avan", "Subhojit"};
    name.push_back("Vikas");

    vector<string>::iterator itr;
    itr = name.begin() + 1;
    cout << *itr << endl;

    itr = name.begin();
    cout << *(itr + 1) << endl;
    // cout << name.at(0) << endl;

    for (itr = name.begin(); itr != name.end(); itr++){
        cout << *itr << endl;
    }

//     for(string R : name){
//         cout << R << endl;
//     }
}