#include <iostream>
#include <queue>
using namespace std;

void firstNegative(int arr[], int n, int k) {
    queue<int> q;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            q.push(i);
    }

    for (int i = k; i <= n; i++) {
        if (!q.empty())
            cout << arr[q.front()] << " ";
        else
            cout << "0 ";

        if (!q.empty() && q.front() <= i - k)
            q.pop();

        if (i < n && arr[i] < 0)
            q.push(i);
    }
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = 8;
    int k = 3;

    firstNegative(arr, n, k);

    return 0;
}
