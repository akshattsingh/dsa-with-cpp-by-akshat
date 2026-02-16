#include <iostream>
using namespace std;

#define SIZE 100

// Manual stack implementation
class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.peek();
}
