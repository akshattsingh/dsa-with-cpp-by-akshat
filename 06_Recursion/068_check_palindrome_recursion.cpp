#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &s, int start, int end) {
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s = "madam";
    cout << "String: " << s << endl;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "It is Palindrome";
    else
        cout << "It is Not Palindrome";

    return 0;
}
