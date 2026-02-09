#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Check if two strings are anagrams
    string s1 = "listen";
    string s2 = "silent";

    if (s1.length() != s2.length()) {
        cout << "Not anagrams" << endl;
        return 0;
    }

    vector<int> freq(26, 0);

    for (char c : s1)
        freq[c - 'a']++;

    for (char c : s2)
        freq[c - 'a']--;

    for (int x : freq) {
        if (x != 0) {
            cout << "Not anagrams" << endl;
            return 0;
        }
    }

    cout << "Anagrams" << endl;
    return 0;
}
