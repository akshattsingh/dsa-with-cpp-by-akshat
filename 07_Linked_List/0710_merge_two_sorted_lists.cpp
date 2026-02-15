#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* merge(Node* l1, Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data < l2->data) {
        l1->next = merge(l1->next, l2);
        return l1;
    } else {
        l2->next = merge(l1, l2->next);
        return l2;
    }
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* l1 = new Node{1, new Node{3, new Node{5, NULL}}};
    Node* l2 = new Node{2, new Node{4, new Node{6, NULL}}};

    cout << "List 1: ";
    printList(l1);

    cout << "\nList 2: ";
    printList(l2);

    Node* merged = merge(l1, l2);
    
    cout << "\nAfter merging both lists: ";
    printList(merged);
}
