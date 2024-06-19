#include<bits/stdc++.h>
using namespace std;

// template <class R>
// class Number{
//     private:
//     R num1;
//     R num2;

//     public:
//     Number(R num3, R num4){
//         num1 = num3;
//         num2 = num4;
//     }
//     R add(){
//         return num1 + num2;
//     }
// };

//Template Function
template<typename R>
R add (R a, R b){
    return a + b;
}

int main(){
    cout << add(15, 20) << endl;
}