#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = 5;

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
