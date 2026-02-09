#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration & basic operations
    string s1 = "Hello";
    string s2("World");

    cout << "string s1: " << s1 << endl;
    cout << "string s2: " << s2 << endl;
    
    cout << "Length of " << s1 << " : " << s1.length() << endl;

    cout << "Concatenation: " << s1 + " " + s2 << endl;

    return 0;
}
