#include <iostream>
using namespace std;

void greet(int count) {
    // Understanding base case + recursive call
    if (count == 0)   // Base case
        return;

    cout << "Hello " << count << endl;
    greet(count - 1); // Recursive call
}

int main() {
    greet(5);
    return 0;
}
