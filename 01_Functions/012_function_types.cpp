#include <iostream>
using namespace std;

// No return, no parameter
void printLine() {
    cout << "--------------------" << endl;
}

// With return, no parameter
int getNumber() {
    return 42;
}

// No return, with parameter
void printSquare(int n) {
    cout << "Square = " << n * n << endl;
}

// With return, with parameter
int multiply(int a, int b) {
    return a * b;
}

int main() {
    printLine();

    int x = getNumber();
    cout << "Number = " << x << endl;

    printSquare(5);

    cout << "Multiply = " << multiply(4, 6) << endl;

    return 0;
}
