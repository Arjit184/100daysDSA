/*
6
10 20 30 20 40 20
Enter the key 20
3*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;

};

int main() {
    int n,key,count=0;

    scanf("%d",&n);

    struct node* head=NULL;
    struct node* temp=NULL,*newnode;

    for(int i=0;i<n;i++) {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL) {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("Enter the key ");
    scanf("%d",&key);

    temp=head;
    while(temp!=NULL) {
        if(temp->data==key) {
            count++;
        }
            temp=temp->next;
            }
            
            
    
    printf("%d",count);
return 0;
}