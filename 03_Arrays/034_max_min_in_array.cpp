#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 5, 23, 8, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find max & min
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 0; i < size; i++) {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }

    cout << "Array : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nMaximum = " << maxVal << endl;
    cout << "Minimum = " << minVal << endl;

    return 0;
}
