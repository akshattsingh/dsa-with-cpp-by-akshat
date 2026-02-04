// input_output.cpp
// Topic: Basic Input and Output in C++
// This program demonstrates how to take input and print output using C++
// Author: Akshat Singh

#include <iostream>
using namespace std;

int main() {
    // -------- Integer Input & Output --------
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // -------- Floating Point Input & Output --------
    float height;
    cout << "Enter your height (in meters): ";
    cin >> height;
    cout << "Your height is: " << height << " meters" << endl;

    // -------- Character Input & Output --------
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    cout << "Your grade is: " << grade << endl;

    // -------- String Input (single word) --------
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;   // takes input until space
    cout << "Hello, " << firstName << "!" << endl;

    // -------- Multiple Inputs in One Line --------
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of numbers: " << a + b << endl;

    // -------- Output Formatting --------
    cout << "Thank you for learning C++ input and output!" << endl;

    return 0;
}
