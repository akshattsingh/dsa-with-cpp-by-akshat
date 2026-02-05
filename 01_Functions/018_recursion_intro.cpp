#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0)
        return;

    cout << n << " ";
    printNumbers(n - 1);  // recursive call => function calling itself
}

int main() {
    printNumbers(5);
    return 0;
}
