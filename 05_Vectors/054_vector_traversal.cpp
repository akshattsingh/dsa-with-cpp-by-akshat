#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Different traversal methods

    // Index-based
    cout << "Index based: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;

    // Range-based
    cout << "Range based: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
