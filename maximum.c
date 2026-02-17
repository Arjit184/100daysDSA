/*
Enter the number of elements:
6
Enter the elements of array:
3
5
1
9
2
8
Maximum element is 9
Minimum element is 1*/
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

 int max=arr[0];
 int min=arr[0];

 for(int i=1;i<n;i++) {
    if(arr[i]>max) {
        max=arr[i];
    }
    else if(arr[i]<min) {
        min=arr[i];
    }
    }
 
   printf("Maximum element is %d\n",max);
    printf("Minimum element is %d\n",min);
    
     return 0;
}