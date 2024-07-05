#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] =='(' || s[i] == '{' || s[i == '[']){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                break;
            }  
        }
        else if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                break;
            }  
        }

        else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                break;
            }  
        }
    }
    if(!s.empty()) return false;

    return true;
}

int main(){
    string s = "[{()}]";
    if(isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
}