#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";

    int key = 30;

    auto it = find(v.begin(), v.end(), key);

    cout << endl;
    if (it != v.end())
        cout << key << " found at index " << it - v.begin() << endl;
    else
        cout << key << " not found" << endl;

    return 0;
}
