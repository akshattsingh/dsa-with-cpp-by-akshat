#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front after dequeue: " << q.getFront() << endl;

    return 0;
}
