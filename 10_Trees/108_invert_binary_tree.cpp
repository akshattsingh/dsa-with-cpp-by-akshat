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

Node* invert(Node* root) {
    if (!root) return NULL;

    Node* left = invert(root->left);
    Node* right = invert(root->right);

    root->left = right;
    root->right = left;

    return root;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    invert(root);

    cout << "Tree Inverted Successfully";

    return 0;
}