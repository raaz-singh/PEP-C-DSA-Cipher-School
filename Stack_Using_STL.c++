#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();
    st.pop();
    cout << st.top();
}