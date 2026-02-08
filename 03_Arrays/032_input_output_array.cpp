#include <iostream>
using namespace std;

int main() {
    // User input & output
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // input array elements
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // output array elements
    }

    return 0;
}
