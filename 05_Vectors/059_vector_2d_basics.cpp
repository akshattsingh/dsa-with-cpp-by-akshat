#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 3, cols = 3;

    // 2D vector (matrix)
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    int count = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = count++;

    for (auto &row : matrix) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
