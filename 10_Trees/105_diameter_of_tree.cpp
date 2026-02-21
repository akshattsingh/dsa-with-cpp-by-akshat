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

int diameter(Node* root, int &height) {
    if (!root) {
        height = 0;
        return 0;
    }

    int lh = 0, rh = 0;

    int ld = diameter(root->left, lh);
    int rd = diameter(root->right, rh);

    height = 1 + max(lh, rh);

    return max(lh + rh + 1, max(ld, rd));
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    int height = 0;
    cout << "Diameter: " << diameter(root, height);

    return 0;
}