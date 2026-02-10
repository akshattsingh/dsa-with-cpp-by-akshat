#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter size of vector: ";
    int n;
    cin >> n;

    // Taking input in vector
    vector<int> v(n);

    cout << "Enter elements of vector: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << "Given vector: ";
    for (int x : v)
        cout << x << " ";

    return 0;
}
