#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to delete node from linked list
void deleteNode(Node*& head, int key) {
    if (!head) return;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->data != key)
        temp = temp->next;

    if (temp->next) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, NULL}}};

    deleteNode(head, 20);
    printList(head);
}
