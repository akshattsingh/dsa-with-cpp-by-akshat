#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "programming";
    int start = 0, end = s.length() - 1;

    cout << "Original string: " << s << endl;
    
    // Reverse using two pointers
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}
