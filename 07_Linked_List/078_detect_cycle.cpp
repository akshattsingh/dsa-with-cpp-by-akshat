#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Floyd’s Cycle Detection
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, NULL}}};
    head->next->next->next = head; // creating cycle

    cout << (hasCycle(head) ? "Cycle Detected" : "No Cycle");
}
