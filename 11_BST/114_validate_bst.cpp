#include <iostream>
#include <climits>  
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

bool isValidBST(Node* root, long minVal, long maxVal) {
    if (!root) return true;

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return isValidBST(root->left, minVal, root->data) &&
           isValidBST(root->right, root->data, maxVal);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    cout << isValidBST(root, LONG_MIN, LONG_MAX);

    return 0;
}