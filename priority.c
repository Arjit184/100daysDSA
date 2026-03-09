/*
5
insert 30
insert 10 
insert 20
delete
10
peek
20*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int arr[MAX];
    int size;
} PriorityQueue;

void initQueue(PriorityQueue* pq) {
    pq->size = 0;
}


void insert(PriorityQueue* pq, int x) {
    pq->arr[pq->size++] = x;
}


int delete(PriorityQueue* pq) {
    if(pq->size == 0) return -1;

    int minIndex = 0;
    for(int i = 1; i < pq->size; i++) {
        if(pq->arr[i] < pq->arr[minIndex])
            minIndex = i;
    }
    int res = pq->arr[minIndex];

    for(int i = minIndex; i < pq->size - 1; i++)
        pq->arr[i] = pq->arr[i+1];

    pq->size--;
    return res;
}

int peek(PriorityQueue* pq) {
    if(pq->size == 0) return -1;

    int minVal = pq->arr[0];
    for(int i = 1; i < pq->size; i++) {
        if(pq->arr[i] < minVal)
            minVal = pq->arr[i];
    }
    return minVal;
}

int main() {
    PriorityQueue pq;
    initQueue(&pq);

    int N;
    scanf("%d", &N);
    char op[10];
    int x;

    for(int i = 0; i < N; i++) {
        scanf("%s", op);
        if(op[0]=='i') { 
            scanf("%d", &x);
            insert(&pq, x);
        } else if(op[0]=='d') {
            printf("%d\n", delete(&pq));
        } else if(op[0]=='p') { 
            printf("%d\n", peek(&pq));
        }
    }

    return 0;
}