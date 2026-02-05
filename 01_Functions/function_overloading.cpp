#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {   // function name same but data type of parameters passed is different = Operator Overloading
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;
    cout << add(2.5, 3.5) << endl;

    return 0;
}
