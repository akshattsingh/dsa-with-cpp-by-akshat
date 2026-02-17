#include <iostream>
#include <stack>
using namespace std;

// Design a stack that supports getMin() in O(1)
class MinStack {
    stack<int> mainStack;
    stack<int> minStack;

public:
    void push(int x) {
        mainStack.push(x);

        if (minStack.empty() || x <= minStack.top())
            minStack.push(x);
    }

    void pop() {
        if (mainStack.top() == minStack.top())
            minStack.pop();

        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack st;
    st.push(5);
    st.push(2);
    st.push(8);
    cout << st.getMin();
}
