#include <iostream>
using namespace std;

int calculate(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << calculate(5) << endl;
    cout << calculate(5, 20) << endl;

    return 0;
}
