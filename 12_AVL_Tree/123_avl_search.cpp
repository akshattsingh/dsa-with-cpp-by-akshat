#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool search(Node* root, int key) {
    if (!root) return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);

    cout << search(root, 10);

    return 0;
}