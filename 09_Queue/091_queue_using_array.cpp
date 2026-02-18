#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size, capacity;

public:
    Queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    void enqueue(int x) {
        if (size == capacity) {
            cout << "Queue Overflow\n";
            return;
        }
        rear++;
        arr[rear] = x;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
        size--;
    }

    int getFront() {
        if (size == 0) return -1;
        return arr[front];
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.getFront() << endl;

    return 0;
}
