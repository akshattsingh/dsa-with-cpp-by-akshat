#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Cplusplus is very powerful language";
    cout << "String: " << s << endl;
    
    int maxLen = 0, currLen = 0;
    string longestWord = "", currWord = "";

    // Find longest word in a sentence
    for (char c : s) {
        if (c != ' ') {
            currWord += c;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                longestWord = currWord;
            }
            currWord = "";
            currLen = 0;
        }
    }

    if (currLen > maxLen)
        longestWord = currWord;

    cout << "Longest word: " << longestWord << endl;

    return 0;
}
