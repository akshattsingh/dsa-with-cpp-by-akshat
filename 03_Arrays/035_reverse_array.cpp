#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array : " ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int start = 0, end = n - 1;

    // Reverse an array
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "\nReversed Array : " ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
