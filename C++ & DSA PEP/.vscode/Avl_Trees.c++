#include <iostream>
#include <algorithm>
using namespace std;

class AVLTreeNode {
public:
    int value;
    AVLTreeNode* left;
    AVLTreeNode* right;
    int height;

    AVLTreeNode(int val) {
        value = val;
        left = right = nullptr;
        height = 1;
    }
};

// Function to get the height of the tree
int height(AVLTreeNode* node) {
    return node ? node->height : 0;
}

// Function to get the balance factor of the node
int getBalance(AVLTreeNode* node) {
    return node ? height(node->left) - height(node->right) : 0;
}

// Right rotate the subtree rooted with y
AVLTreeNode* rightRotate(AVLTreeNode* y) {
    AVLTreeNode* x = y->left;
    AVLTreeNode* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Left rotate the subtree rooted with x
AVLTreeNode* leftRotate(AVLTreeNode* x) {
    AVLTreeNode* y = x->right;
    AVLTreeNode* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Insert a key into the subtree rooted with node
AVLTreeNode* insert(AVLTreeNode* node, int value) {
    // Perform the normal BST insertion
    if (!node)
        return new AVLTreeNode(value);

    if (value < node->value)
        node->left = insert(node->left, value);
    else if (value > node->value)
        node->right = insert(node->right, value);
    else
        return node;

    // Update height of this ancestor node
    node->height = 1 + max(height(node->left), height(node->right));

    // Get the balance factor of this ancestor node to check whether it became unbalanced
    int balance = getBalance(node);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && value < node->left->value)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && value > node->right->value)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && value > node->left->value) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && value < node->right->value) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(AVLTreeNode* root) {
    if (root) {
        cout << root->value << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Function to calculate the height of the AVL tree
int getHeight(AVLTreeNode* node) {
    return node ? node->height : 0;
}

int main() {
    AVLTreeNode* root = nullptr;
    root = insert(root, 20);
    root = insert(root, 4);
    root = insert(root, 15);
    root = insert(root, 30);
    root = insert(root, 25);
    root = insert(root, 35);
    root = insert(root, 50);

    cout << "Pre-order traversal of the constructed AVL tree is:\n";
    preOrder(root);
    cout << "\nHeight of the AVL tree: " << getHeight(root) << endl;

    return 0;
}