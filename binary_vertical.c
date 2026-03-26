#include <stdio.h>
#include <stdlib.h>

// Tree Node
struct TreeNode {
    int val;
    struct TreeNode *left, *right;
};

// Queue node (for BFS with horizontal distance)
struct QNode {
    struct TreeNode* node;
    int hd;
};

// Create new tree node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Build tree from level order
struct TreeNode* buildTree(int arr[], int n) {
    if (n == 0 || arr[0] == -1)
        return NULL;

    struct TreeNode* root = createNode(arr[0]);

    struct TreeNode* queue[1000];
    int front = 0, rear = 0;

    queue[rear++] = root;
    int i = 1;

    while (i < n) {
        struct TreeNode* curr = queue[front++];

        if (i < n && arr[i] != -1) {
            curr->left = createNode(arr[i]);
            queue[rear++] = curr->left;
        }
        i++;

        if (i < n && arr[i] != -1) {
            curr->right = createNode(arr[i]);
            queue[rear++] = curr->right;
        }
        i++;
    }

    return root;
}

// Vertical Order Traversal
void verticalOrder(struct TreeNode* root) {
    if (!root) return;

    struct QNode queue[1000];
    int front = 0, rear = 0;

    // To store result: hd range [-1000,1000]
    int result[2001][100];
    int count[2001] = {0};

    int offset = 1000; // shift for negative hd

    // push root
    queue[rear++] = (struct QNode){root, 0};

    while (front < rear) {
        struct QNode temp = queue[front++];
        struct TreeNode* node = temp.node;
        int hd = temp.hd;

        // store value
        result[hd + offset][count[hd + offset]++] = node->val;

        if (node->left)
            queue[rear++] = (struct QNode){node->left, hd - 1};

        if (node->right)
            queue[rear++] = (struct QNode){node->right, hd + 1};
    }

    // print from leftmost to rightmost
    for (int i = 0; i < 2001; i++) {
        if (count[i] > 0) {
            for (int j = 0; j < count[i]; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    struct TreeNode* root = buildTree(arr, n);

    verticalOrder(root);

    return 0;
}