#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Slow & fast pointer technique
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, NULL}}}};

    cout << "Given Linked list: ";
    printList(head);

    Node* mid = findMiddle(head);
    cout << "\nMiddle: " << mid->data;
}
