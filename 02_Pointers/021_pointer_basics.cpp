#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *ptr = &a;  // declaration of pointer variable

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer value (address): " << ptr << endl;
    cout << "Dereferenced pointer value: " << *ptr << endl;

    return 0;
}
