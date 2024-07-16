#include <iostream>
using namespace std;

class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <= n && arr[largest] < arr[right]) {
            largest = right;
        }

        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    void heapsort(int arr[], int n) {
        for (int i = n / 2; i > 0; i--) {
            heapify(arr, n, i);
        }

        int size = n;
        while (size > 1) {
            swap(arr[size], arr[1]);
            size--;

            heapify(arr, size, 1);
        }
    }
};

int main() {
    Heap h;
    
    int arr[6] = {-1, 54, 53, 52, 50, 55};
    int n = 5;

    cout << "Original array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    h.heapsort(arr, n);

    cout << "Sorted array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}