#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Remove duplicates (sorted vector)
    vector<int> v = {1, 1, 2, 2, 3, 3, 4};
    cout << "old vector: "; 
    for (int x : v)
        cout << x << " ";
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());

    cout << "\nnew vector: "; 
    for (int x : v)
        cout << x << " ";

    return 0;
}
