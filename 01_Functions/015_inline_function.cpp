#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    cout << "Cube of 3 = " << cube(3) << endl;
    return 0;
}
