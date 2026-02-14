#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

bool search(Node* head, int key) {
    while (head) {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

int main() {
    Node* head = new Node{5, new Node{15, new Node{25, NULL}}};

    cout << "Linked List: ";
    printList(head);

    int key;
    cout << "\nEnter key: ";
    cin >> key;

    if(search(head, key)) 
        cout << key << " found in given linked list";
    else 
        cout << key << " not Found";
}
