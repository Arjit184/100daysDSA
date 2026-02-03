#include<stdio.h>

int main() {
    int n,key,i,found=0;
    int comparisons=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements:\t");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched:");
    scanf("%d",&key);

    for(i=0;i<n;i++) {
        comparisons++;
        if(arr[i]==key) {
            found=1;
            break;
        }
    }
    if(found) {
        printf("Key found at %d position\n",i);
        printf("Found in %d comparisons\n",comparisons);
    }
    else {
        printf("Element not found in %d comparisons\n",comparisons);
    }
    return 0;
}