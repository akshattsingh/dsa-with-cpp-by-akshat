#include <iostream>
using namespace std;

// Function declaration
void greet();

int add(int a, int b) {
    return a + b;
}

// Function definition
void greet() {
    cout << "Hello! Welcome to Functions in C++" << endl;
}

int main() {
    greet();

    int sum = add(10, 20);
    cout << "Sum = " << sum << endl;

    return 0;
}
