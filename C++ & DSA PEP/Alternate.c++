#include <iostream>
using namespace std;

void swapAlternate(char arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    char arr[n];
    cout << "Enter the characters: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    swapAlternate(arr, n);
    cout << "Array after swapping alternate characters: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
