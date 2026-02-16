#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    int n = arr.size();

    vector<int> result(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();

        result[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    for (int x : result)
        cout << x << " ";
}
