#include <stdio.h>
#include <stdlib.h>

// BST Node
struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

// Create new node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct TreeNode* insert(struct TreeNode* root, int val) {
    if (root == NULL)
        return createNode(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Search in BST
int searchBST(struct TreeNode* root, int x) {
    if (root == NULL)
        return 0;

    if (root->val == x)
        return 1;

    if (x < root->val)
        return searchBST(root->left, x);
    else
        return searchBST(root->right, x);
}

// Main function
int main() {
    int n, x;
    scanf("%d", &n);

    struct TreeNode* root = NULL;

    // Build BST
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }

    // Value to search
    scanf("%d", &x);

    if (searchBST(root, x))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}