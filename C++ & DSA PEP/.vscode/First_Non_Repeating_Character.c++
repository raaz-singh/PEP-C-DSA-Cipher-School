#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    char arr[100];
    cout << "Enter a string: ";
    cin >> arr;

    unordered_map<char, int> freq;
    for (int i = 0; arr[i] != '\0'; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; arr[i] != '\0'; i++) {
        if (freq[arr[i]] == 1) {
            cout << "First non-repeating character: " << arr[i] << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;
    return 0;
}
