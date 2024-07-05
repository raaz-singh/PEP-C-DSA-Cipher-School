#include<bits/stdc++.h>
#include<stack>
using namespace std;

int prefix(string s)
{
    stack<char> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;

            case '^':
                st.push(pow(operand1, operand2));
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string s = "-+7*45+20";
    cout << prefix(s);
    return 0;
}



// #include <bits/stdc++.h> 

// void solve(stack<int>& myStack, int x){
//     if(myStack.empty()){
//         myStack.push(x);
//         return;
//     } 
//     int num = myStack.top();
//     myStack.pop();

//     solve(myStack, x);
//     myStack.push(num);
// }

// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     // Write your code here.
//     solve(myStack, x);
//     return myStack;
// }   

//Pushing an element at the bottom of the stack and all other element without using second stack