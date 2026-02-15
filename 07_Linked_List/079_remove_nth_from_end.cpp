#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* removeNthFromEnd(Node* head, int n) {
    Node dummy{0, head};
    Node* fast = &dummy;
    Node* slow = &dummy;

    for (int i = 0; i <= n; i++)
        fast = fast->next;

    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }

    Node* del = slow->next;
    slow->next = slow->next->next;
    delete del;

    return dummy.next;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, new Node{4, NULL}}}};

    cout << "Original list: ";
    printList(head);

    head = removeNthFromEnd(head, 2);

    cout << "\nAfter deletion: ";
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
