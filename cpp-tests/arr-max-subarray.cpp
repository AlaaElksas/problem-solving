#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size];

    // Read input array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Finding maximum in each sub-array
    for (int i = 0; i < size; i++) {
        int max = arr[i];  // Initialize max with the current element
        for (int j = i; j < size; j++) {
            if (arr[j] > max) {
                max = arr[j];  // Update max if a larger element is found
            }
            cout << max << " ";
        }
    }

    return 0;
}