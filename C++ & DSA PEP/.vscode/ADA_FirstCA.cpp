#include <iostream>
using namespace std;

void merge(int times[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = times[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = times[mid + 1 + i];
    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            times[k] = L[i];
            i++;
        } else {
            times[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        times[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        times[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int times[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(times, left, mid);
        mergeSort(times, mid + 1, right);

        merge(times, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Enter the number of participants: ";
    cin >> n;

    int* times = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter completion time for participant " << i + 1 << ": ";
        cin >> times[i];
    }
    mergeSort(times, 0, n - 1);
    cout << "\nCompletion times from fastest to slowest:" << endl;
    for (int i = 0; i < n; i++) {
        cout << times[i] << " minutes" << endl;
    }

    return 0;
}
