/*
6
enqueue 10
enqueue 20
enqueue 30
dequeue
10
enqueue 40
dequeue
20*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if(rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Empty\n");
        return;
    }

    struct Node* temp = front;
    printf("%d\n", front->data);

    front = front->next;

    if(front == NULL)
        rear = NULL;

    free(temp);
}

int main() {

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {

        char op[10];
        scanf("%s", op);

        if(op[0] == 'e') {   // enqueue
            int x;
            scanf("%d", &x);
            enqueue(x);
        }
        else if(op[0] == 'd') {  // dequeue
            dequeue();
        }
    }

    return 0;
}