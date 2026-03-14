/*
5
10 20 30 40 50
50 40 30 20 10 */

#include <stdio.h>

#define MAX 1000

int queue[MAX], front = 0, rear = -1;
int stack[MAX], top = -1;

void enqueue(int x) {
    queue[++rear] = x;
}

int dequeue() {
    return queue[front++];
}

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        enqueue(x);
    }

    // Move queue → stack
    while(front <= rear) {
        push(dequeue());
    }

    // Move stack → queue
    while(top >= 0) {
        enqueue(pop());
    }

    // Print reversed queue
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}
