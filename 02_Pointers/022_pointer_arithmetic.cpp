// Pointer increment & decrement

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    for (int i = 0; i < 4; i++) {
        cout << "Value: " << *ptr << "; Address: " << ptr << endl;
        ptr++;  // increase value of pointer by 1 in each iteration
    }

    return 0;
}
