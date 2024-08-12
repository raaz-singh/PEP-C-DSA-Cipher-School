#include <iostream>
#include <climits>
using namespace std;

int main() {
    char arr[100];
    int freq[256] = {0};

    cout << "Enter a string: ";
    cin.getline(arr, 100);

    for (int i = 0; arr[i] != '\0'; i++) {
        freq[(unsigned char)arr[i]]++;
    }

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    char maxChar, minChar;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxChar = i;
            }
            if (freq[i] < minFreq) {
                minFreq = freq[i];
                minChar = i;
            }
        }
    }

    cout << "Character with maximum occurrence: " << maxChar << " (" << maxFreq << " times)" << endl;
    cout << "Character with minimum occurrence: " << minChar << " (" << minFreq << " times)" << endl;

    return 0;
}
