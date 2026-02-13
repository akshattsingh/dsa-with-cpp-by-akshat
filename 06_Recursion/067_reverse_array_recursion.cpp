#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int start, int end) {
    if (start >= end)
        return;

    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int x : arr)
        cout << x << " ";

    reverseArray(arr, 0, arr.size() - 1);

    cout << "\nReversed Array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}
