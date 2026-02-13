#include <iostream>
#include <vector>
using namespace std;

// recursive binary search function
int binarySearch(vector<int> &arr, int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binarySearch(arr, mid + 1, high, key);
    else
        return binarySearch(arr, low, mid - 1, key);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << "Array: " ;
    for (int x : arr) {
        cout << x << " ";
    }
    int key;
    cout << "\nEnter value to search in the given array: ";
    cin >> key;
    
    cout << key << " found at index: " << binarySearch(arr, 0, arr.size() - 1, key);
    return 0;
}
