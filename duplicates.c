#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter sorted elements:\t");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    if(n==0) {
        return 0;
    }

    int j=1; 

    for(int i = 1; i<n;i++) {
        if(arr[i] !=arr[i-1]) {
            arr[j]=arr[i];
            j++;
        }
    }

    printf("Array after removing duplicates:\n");
    for(int i=0;i<j;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
