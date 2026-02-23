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

void inorder(Node* root, int &k, int &result) {
    if (!root) return;

    inorder(root->left, k, result);

    k--;
    if (k == 0) {
        result = root->data;
        return;
    }

    inorder(root->right, k, result);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);

    int k = 2, result = -1;
    inorder(root, k, result);

    cout << "Kth Smallest: " << result;

    return 0;
}