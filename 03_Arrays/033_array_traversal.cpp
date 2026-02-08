#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Traversing an array
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
