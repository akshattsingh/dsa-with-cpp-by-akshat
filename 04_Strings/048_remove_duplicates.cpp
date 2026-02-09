#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "banana";
    cout << "Original string: " << s << endl;
    
    vector<bool> seen(256, false);
    string result = "";

    // Remove duplicate characters
    for (char c : s) {
        if (!seen[c]) {
            seen[c] = true;
            result += c;
        }
    }

    cout << "After removing duplicates: " << result << endl;

    return 0;
}
