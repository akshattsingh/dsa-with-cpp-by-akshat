#include <iostream>
#include <string>
using namespace std;

// function to check a character is vowel or not
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u';
}

int main() {
    string s = "HelloWorld";

    int vowels = 0, consonants = 0;

    // Count vowels & consonants
    for (char c : s) {
        if (isalpha(c)) {
            if (isVowel(c))
                vowels++;
            else
                consonants++;
        }
    }
    cout << "String: " << s << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
