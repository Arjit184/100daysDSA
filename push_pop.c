/*
5
10 20 30 40 50
2
30 20 10 */

#include <stdio.h>

#define MAX 1000

int main() {
    int stack[MAX];
    int top = -1;
    int n, m;

    // Input number of elements to push
    scanf("%d", &n);

    // Push n elements
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        stack[++top] = x;
    }

    // Input number of pops
    scanf("%d", &m);

    // Perform m pops
    for(int i = 0; i < m; i++) {
        if(top == -1) {
            printf("Stack Underflow\n");
            break;
        }
        top--;
    }

    // Print remaining elements from top to bottom
    if(top == -1) {
        printf("Stack is empty");
    } else {
        for(int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }

    return 0;
}