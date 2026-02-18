/*
Enter the number of elements:
5
Enter the elements of array:
1
2
3
4
5
Enter the number of positions to rotate:
2
4 5 1 2 3*/

#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int k;
    printf("Enter the number of positions to rotate:\n");
    scanf("%d",&k);
    k=k%n;

    int temp[n];

    for(int i=0;i<k;i++) {
        temp[i]=arr[n-k+i];
    }

    for(int i=0;i<n-k;i++) {
        temp[k+i]=arr[i];
    }

    for(int i=0;i<n;i++) {
        printf("%d ",temp[i]);
    }

return 0;
}