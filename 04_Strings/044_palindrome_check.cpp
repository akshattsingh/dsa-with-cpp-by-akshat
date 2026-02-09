#include <iostream>
#include <string>
using namespace std;

int main() {
    // Palindrome string
    string s = "madam";
    int start = 0, end = s.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
