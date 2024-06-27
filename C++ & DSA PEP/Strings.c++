// Strings -> String is a collection of characters
// 2 types -> Strings that are objects of string classes(STL)
// C-String (c-style string)

#include<bits/stdc++.h>
using namespace std;

int main(){
    // char str[] = "Hello";
    // char str1[] = {'H', 'e', 'l', 'l', 'o'}; We can also define char arr like this too

    char str[100];
    cout << "Enter your Name" << endl;
    // cin >> str;
    cin.getline(str, 100);

    cout << "Your name Is: " << str << endl;

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << length << endl;
    
}