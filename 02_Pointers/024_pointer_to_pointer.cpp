// Double pointer

#include <iostream>
using namespace std;

int main() {
    int x = 50;

    int *p = &x;
    int **pp = &p;

    cout << "Value of x: " << x << endl;
    cout << "Value using *p: " << *p << endl;
    cout << "Value using **pp: " << **pp << endl;

    return 0;
}
