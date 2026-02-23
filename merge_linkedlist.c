/*
5 
10 20 30 40 50
4
15 25 35 45
10 15 20 25 30 35 40 45 50 */


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};


struct node* insertEnd(struct node* head, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
        return newNode;

    struct node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct node* merge(struct node* l1, struct node* l2)
{
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    struct node* head = NULL;
    struct node* tail = NULL;

  
    if(l1->data <= l2->data)
    {
        head = tail = l1;
        l1 = l1->next;
    }
    else
    {
        head = tail = l2;
        l2 = l2->next;
    }

    while(l1 != NULL && l2 != NULL)
    {
        if(l1->data <= l2->data)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    
    if(l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    return head;
}


void printList(struct node* head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int n, m, x;
    struct node* head1 = NULL;
    struct node* head2 = NULL;

   
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        head1 = insertEnd(head1, x);
    }

   
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        head2 = insertEnd(head2, x);
    }

   
    struct node* result = merge(head1, head2);

    printList(result);

    return 0;
}