#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3};

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    // Sort & reverse
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    cout << "\nAfter sort & reverse: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
