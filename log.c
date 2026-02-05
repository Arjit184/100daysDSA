#include<stdio.h>
int main() {
    int n1,n2;

    printf("Enter the number of arrivals in server 1");
    scanf("%d",&n1);

    int arr1[n1];

    printf("Enter the arrival times for server 1:\n");
    for(int i=0;i<n1;i++) {
        scanf("%d",&arr1[i]);
    }

     printf("Enter the number of arrivals in server 2");
    scanf("%d",&n2);

    int arr2[n2];

    printf("Enter the arrival times for server 2:\n");
    for(int i=0;i<n2;i++) {
        scanf("%d",&arr2[i]);
    }

    int C[n1+n2];
    int i=0,j=0,k=0;

    while(i<n1 && j<n2) {
        if(arr1[i]<=arr2[j]) {
            C[k++]=arr1[i++];
        }
        else {
            C[k++]=arr2[j++];
        }
        }
        while(j<n2){
        C[k++]=arr2[j++];
        }
        printf("The merged arrival times are:\n");
        for(int i=0;i<k;i++) {
            printf("%d\t",C[i]);
        }
        
return 0;
    }
