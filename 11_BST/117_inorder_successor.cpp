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

Node* findSuccessor(Node* root, Node* target) {
    Node* successor = NULL;

    while (root) {
        if (target->data < root->data) {
            successor = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return successor;
}

int main() {
    /*
            20
           /  \
         10    30
        /  \     \
       5   15     40
    */

    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->right->right = new Node(40);

    // Target node
    Node* target = root->left;  // Node with value 10

    Node* successor = findSuccessor(root, target);

    if (successor)
        cout << "Inorder Successor of " << target->data 
             << " is " << successor->data << endl;
    else
        cout << "No Inorder Successor found." << endl;

    return 0;
}