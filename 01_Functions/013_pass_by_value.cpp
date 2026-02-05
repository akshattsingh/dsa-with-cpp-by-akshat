// original value does not change

#include <iostream>
using namespace std;

void increment(int x) {
    x = x + 1;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 10;
    increment(a);
    cout << "Inside main: " << a << endl;

    return 0;
}
