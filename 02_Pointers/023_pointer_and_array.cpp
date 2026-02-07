// Relationship between arrays and pointers

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Using array indexing:" << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\nUsing pointer notation:" << endl;
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";

    return 0;
}
