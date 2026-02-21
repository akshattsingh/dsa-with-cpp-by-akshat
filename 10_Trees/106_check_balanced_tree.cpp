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

int checkBalanced(Node* root) {
    if (!root) return 0;

    int lh = checkBalanced(root->left);
    if (lh == -1) return -1;

    int rh = checkBalanced(root->right);
    if (rh == -1) return -1;

    if (abs(lh - rh) > 1)
        return -1;

    return 1 + max(lh, rh);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    if (checkBalanced(root) != -1)
        cout << "Balanced Tree";
    else
        cout << "Not Balanced";

    return 0;
}