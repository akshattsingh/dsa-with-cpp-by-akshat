#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to insert at end of linked list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printList(head);
}
