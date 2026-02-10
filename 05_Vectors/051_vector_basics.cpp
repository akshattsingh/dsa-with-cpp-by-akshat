#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaration & initialization
    vector<int> v1;                 // empty vector
    vector<int> v2(5);              // size 5, all 0
    vector<int> v3(5, 10);           // size 5, all 10
    vector<int> v4 = {1, 2, 3, 4};   // initializer list

    cout << "v3 elements: ";
    for (int x : v3)
        cout << x << " ";

    return 0;
}
