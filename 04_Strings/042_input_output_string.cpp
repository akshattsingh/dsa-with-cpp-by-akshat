#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Input with spaces
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Hello, " << name << endl;

    return 0;
}
