#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int key = 15;
    int n = 5;

    int low = 0, high = n - 1;

    // Binary Search (sorted array)
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            cout << "Found at index " << mid << endl;
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}
