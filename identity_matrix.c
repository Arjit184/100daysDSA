/*
Enter the order of square matrix:3
Enter the elements of the matrix:
1 0 0    
0 1 0
0 0 1
Identity Matrix*/

#include<stdio.h>

int main() {
    int n,i,j;

    printf("Enter the order of square matrix:");
    scanf("%d",&n);

    int A[n][n];

    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);

        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
           if(i==j && A[i][j]!=1)
            {
                printf("Not an Identity Matrix");
                return 0;
            }
            if(i!=j && A[i][j]!=0)
            {
                printf("Not an Identity Matrix");
                return 0;
            }
        }
    }

    printf("Identity Matrix");

    return 0;
}