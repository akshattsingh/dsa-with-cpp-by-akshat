#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Size vs Capacity
    cout << "Size Capacity\n";
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
        cout << v.size() << "    " << v.capacity() << endl;
    }

    return 0;
}
