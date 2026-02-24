/*
5
10 20 30 40 50
30
10 20 40 50 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* deleteFirstOccurrence(struct node* head, int key)
{
    if(head == NULL)
        return head;

    if(head->data == key)
    {
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node* current = head;

    while(current->next != NULL)
    {
        if(current->next->data == key)
        {
            struct node* temp = current->next;
            current->next = temp->next;
            free(temp);
            break;   
        }
        current = current->next;
    }

    return head;
}

int main()
{
    int n, key;
    scanf("%d", &n);

    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* newNode = NULL;

    for(int i = 0; i < n; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    scanf("%d", &key);

    head = deleteFirstOccurrence(head, key);

    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}