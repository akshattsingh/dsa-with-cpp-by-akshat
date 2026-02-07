// Modifying values using pointers

#include <iostream>
using namespace std;

// pass by reference using pointer
void changeA(int *ptr) {
    *ptr = 20;
    cout << *ptr << endl;
}

// pass by reference using reference variable
void changeA(int &a) {
    a = 30;
    cout << a << endl;
}

int main() {
    int a = 10;
    changeA(&a);  // call by reference
    cout << a << endl;

    int &b = a;  // reference variable
    b = 25;
    cout << b << endl;

    changeA(a);  // call by reference variable
    cout << a << endl;

    return 0;
}
