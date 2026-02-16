#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = NULL; }

    void push(int x) {
        Node* newNode = new Node{x, top};
        top = newNode;
    }

    void pop() {
        if (!top) return;
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (!top) return -1;
        return top->data;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(15);
    cout << s.peek();
}
