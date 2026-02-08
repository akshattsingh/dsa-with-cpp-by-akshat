#include <iostream>
using namespace std;

int main() {
    // Declaration & initialization
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    cout << "First array elements:" << endl;
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << " ";

    cout << "\nSecond array elements:" << endl;
    for (int i = 0; i < 3; i++)
        cout << arr2[i] << " ";

    return 0;
}
