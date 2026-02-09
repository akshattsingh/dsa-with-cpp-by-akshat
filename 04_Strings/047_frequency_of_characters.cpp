#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "programming";
    cout << "String: " << s << endl;
    cout << "Character Frequency: " << endl;
    unordered_map<char, int> freq;

    for (char c : s)
        freq[c]++;

    for (auto &p : freq)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
