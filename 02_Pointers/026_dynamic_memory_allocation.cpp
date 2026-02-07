// new & delete keywords

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    *ptr = 100;
    cout << "Value: " << *ptr << endl;

    delete ptr;

    int n = 5;
    int *arr = new int[n];   // dynamic memory allocation 

    for (int i = 0; i < n; i++)
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;

    return 0;
}
