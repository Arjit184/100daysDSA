/*
Enter the number of elements:5
Enter the elements:     10 20 30 40 50
Enter the position to delete the element:2
The array after deletion is :
10      30      40      50
    */

#include<stdio.h>

int main() {
    int n,pos;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:\t");
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position to delete the element:");
    scanf("%d",&pos);

    for(int i=pos-1;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
n--;

printf("The array after deletion is :\n");
for(int i=0;i<n;i++) {
    printf("%d\t",arr[i]);
}
return 0;
}
