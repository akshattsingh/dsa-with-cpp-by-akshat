#include <iostream>
#include <string>
using namespace std;

// Function to check if pattern is a substring of text
bool isSubstring(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    // Edge cases
    if (m > n) return false;
    if (m == 0) return true;

    // Sliding window comparison
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return true; // match found
        }
    }
    return false;
}

int main() {
    string text, pattern;

    cout << "Enter main string: ";
    getline(cin, text);

    cout << "Enter substring to search: ";
    getline(cin, pattern);

    if (isSubstring(text, pattern)) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}
