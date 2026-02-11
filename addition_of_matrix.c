/*
Enter the number of rows and columns:3 3
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1
10 10 10 
10 10 10
10 10 10*/


#include<stdio.h>

int main() {
    int m,n;

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);

    int A[m][n],B[m][n],C[m][n];

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&A[i][j]);
        }        
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d",&B[i][j]);
        }        
    }

    for(int i=0;i<m;i++) {
    for(int j=0;j<n;j++) {
        C[i][j]=A[i][j]+B[i][j];

    
    }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

