#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};

    cout << "Vector(Before): ";
    for (int x : v)
        cout << x << " ";

    // Insert & erase
    v.insert(v.begin() + 2, 3);  // insert at index 2
    v.erase(v.begin() + 4);      // erase element

    cout << "\nVector(After): ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
