// original value changes

#include <iostream>
using namespace std;

void increment(int &x) {
    x = x + 1;
}

int main() {
    int a = 10;
    increment(a);

    cout << "Value after increment: " << a << endl;

    return 0;
}
