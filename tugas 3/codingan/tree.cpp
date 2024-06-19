#include <iostream>

using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};


void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }
}


void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}


void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    
    TNode *root = new TNode(1);
    TNode *node2 = new TNode(2);
    TNode *node3 = new TNode(3);
    TNode *node4 = new TNode(4);
    TNode *node5 = new TNode(5);

    // Build the tree
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;

    
    preOrder(root); 
    cout << endl;
    inOrder(root); 
    cout << endl;
    postOrder(root); 
    cout << endl;

    return 0;
}
