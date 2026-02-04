// example codes - time complexity

#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 3, 4, 7};

    // ------ O(1) – Constant Time ------
    int x = arr[0];

    // ------ O(n) – Linear Time ------
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ------ O(n²) – Quadratic Time ------
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // ------ O(log n) – Logarithmic Time ------
    // Binary Search
    int low = 0;
    int high = arr[n-1];

    int key = 4;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) {
            cout << mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return 0;
}



